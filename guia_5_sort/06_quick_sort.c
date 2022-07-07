// Terminamos los tres métodos de ordenamiento con quick sort. Programar ahora este algoritmo, cumpliendo las mismas condiciones de los ejercicios anteriores.

#include <stdbool.h>

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