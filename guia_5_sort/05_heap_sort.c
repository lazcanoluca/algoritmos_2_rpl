
// Al igual que en el ejercicio anterior, se pide ordenar el vector de números pasados por parámetro. Se cuenta con las funciones sift_up y sift_down ya implementadas.

#include <stdbool.h>

extern void sift_up(int* vector, int tope);
extern void sift_down(int* vector, int tope, int pos_actual);

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
    tope = tope-1;
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