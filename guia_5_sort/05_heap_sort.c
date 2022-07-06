#include <stdbool.h>
#include <stdio.h>

#define MAX_ARRAY 100

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void sift_up(int *vector, int pos_actual)
{
	if (!vector)
		return;

	int pos_hijo = pos_actual;
	int pos_padre = pos_hijo % 2 == 0 ? (pos_hijo-2) / 2 : (pos_hijo-1) / 2;
	int aux;

	while (pos_hijo > 0 && vector[pos_hijo] > vector[pos_padre]) {
		aux = vector[pos_padre]; 
		vector[pos_padre] = vector[pos_hijo];
		vector[pos_hijo] = aux;

		pos_hijo = pos_padre;
		pos_padre = pos_hijo % 2 == 0 ? (pos_hijo-2) / 2 : (pos_hijo-1) / 2;
	}
}

void sift_down(int* vector, int tope, int pos_actual) {
    if (!vector) return;

    int max = 2*pos_actual+1;
    int aux;

    while (max <= tope) {
        if (max < tope) 
            if (vector[max+1] > vector[max])
                max++;
            
        if (vector[pos_actual] >= vector[max])
            return;
        
		aux = vector[pos_actual];
		vector[pos_actual] = vector[max];
		vector[max] = aux;

        pos_actual = max;
        max = 2*pos_actual+1;

    }
}

void heapify(int *arr, int tope)
{
        for (int i = tope/2; i >= 0; i--) {
                sift_down(arr, tope, i);
        }
}

int quitar_raiz(int *arr, int *tope)
{
	int raiz = arr[0];

	arr[0] = arr[*tope];
	arr[*tope] = raiz;

	(*tope)--;

	sift_down(arr, *tope, 0);

	return raiz;
}

void heap_sort(int* numeros, int tope, bool ascendente)
{
	int n = tope;
	heapify(numeros, tope);

	while(tope > 0) {
		quitar_raiz(numeros, &tope);
	}

	if (ascendente == false) {
		int aux;

		for(int i = 0; i < n/2; i++){
			aux = numeros[i];
			numeros[i] = numeros[n-i];
			numeros[n-i] = aux;
		}
	}
}

int main(int argc, char const *argv[])
{
        int arr1[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int arr2[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int tope = 6; // en realidad es cantidad, no tope.


	for (int i = 0; i <= tope; i++) {
		printf("%i\n", i);
	}

	printf("original array:");
        printArray(arr1, 7);

        heap_sort(arr1, tope, true);
        heap_sort(arr2, tope, false);

	printf("sorted ascendente: ");
        printArray(arr1, 7);
	printf("sorted descentente: ");
        printArray(arr2, 7);

        return 0;
}
