
// Empezamos con el primero de los tres sorts que se ven en la materia Algo2Mendez. Como ya estamos en temas de Algo2, en vez de recibir un vector desordenado y otro donde ir enviando los elementos ordenados, se recibe solamente un vector. Al principio, se recibe el vector desordenado, y al finalizar el algoritmo, el mismo debe encontrarse ordenado.

// Este algoritmo puede hacerse de manera tanto iterativa como recursiva, cualquiera está bien (mientras funcione, claro).

// Como venimos viendo hasta ahora, se recibe también un booleano para decidir si debemos ordenar de manera ascendente o descendente el vector.

#include <stdbool.h>

void merge(int *nums, int indice_medio, int indice_tope, bool ascendente)
{
    int largo_subarray_izq = indice_medio + 1;
    int largo_subarray_der = indice_tope - indice_medio;

    int izq[largo_subarray_izq];
    int der[largo_subarray_der];

    for (int i = 0; i < largo_subarray_izq; i++)
        izq[i] = nums[i];

    for (int j = 0; j < largo_subarray_der; j++)
        der[j] = nums[indice_medio + 1 + j];
    
    int i = 0, j = 0, k = 0;
    
    while (i < largo_subarray_izq && j < largo_subarray_der) {

        if (ascendente) {
            if(izq[i] <= der[j]) {
                nums[k] = izq[i];
                i++;
            } else {
                nums[k] = der[j];
                j++;
            }
        } else {
            if(izq[i] >= der[j]) {
                nums[k] = izq[i];
                i++;
            } else {
                nums[k] = der[j];
                j++;
            }
        }

        k++;
    }

    while (i < largo_subarray_izq) {
        nums[k] = izq[i];
        i++;
        k++;
    }

    while (j < largo_subarray_der) {
        nums[k] = der[j];
        j++;
        k++;
    }
}

// Cómo que tope == largo del array ??????? tope tiene q ser índice final ಠ_ಠ
void merge_sort(int* numeros,
    int tope,
    bool ascendente)
{
    tope = tope-1;
    if (tope > 0) {

        int medio = tope/2;

        merge_sort(numeros, medio+1, ascendente);
        merge_sort(numeros + medio + 1, tope - medio , ascendente);

        merge(numeros, medio, tope, ascendente);
    }
}