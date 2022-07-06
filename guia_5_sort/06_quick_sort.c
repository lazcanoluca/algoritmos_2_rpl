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

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int particion (int* nums, int tope, bool ascendente)
{
	int pivote = nums[tope]; // pivote siempre el último
	int i = -1;

	for (int j = 0; j < tope; j++) {

		if (ascendente) {
			if (nums[j] < pivote) {
				i++;
				swap(&nums[i], &nums[j]);

			}
		} else {
			if (nums[j] > pivote) {
				i++;
				swap(&nums[i], &nums[j]);
			}	
		}

	}

	swap(&nums[i+1], &nums[tope]);
	return i+1;
}

void quick_sort(int* numeros, int tope, bool ascendente)
{
	tope = tope-1;

	if (tope > 0) {
		int pi = particion(numeros, tope, ascendente);

		quick_sort(numeros, pi, ascendente);
		quick_sort(numeros + pi + 1, tope - pi, ascendente);
	}
}

int main(int argc, char const *argv[])
{
        int arr1[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int arr2[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int tope = 7; // en realidad es cantidad, no tope.

	printf("array original: ");
        printArray(arr1, 7);

        quick_sort(arr1, tope, true);
        quick_sort(arr2, tope, false);

	printf("sorted ascendente: ");
        printArray(arr1, 7);
	printf("sorted descendente: ");
        printArray(arr2, 7);

        return 0;
}
