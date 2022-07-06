#include <stdlib.h>
#include <stdio.h>

#define MAX_HEAP 100

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

void mostrar_heap(int *vector, int tamanio)
{
	printf("[");
	for (int i = 0; i < tamanio; i++) {
		printf("%i", vector[i]);
		if (i < tamanio-1)
			printf(", ");
	};
	printf("]\n");

}

int main(int argc, char const *argv[])
{
	int heap[MAX_HEAP] = {5, 2, 8, 9, 3, 15, 6, 7};
	int tamanio = 8;

	mostrar_heap(heap, tamanio);

	sift_up(heap, 5);

	mostrar_heap(heap, tamanio);

	return 0;
}
