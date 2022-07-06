#include <stdbool.h>
#include <stdio.h>
#define MAX_ARRAY 100

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

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
        int arr1[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int arr2[MAX_ARRAY] = { 7, 4, 8, 1, 3, 9, 2 };
        int tope = 7; // en realidad es cantidad, no tope.

        printArray(arr1, 7);
        printArray(arr2, 7);

        merge_sort(arr1, tope, true);
        merge_sort(arr2, tope, false);

        printArray(arr1, 7);
        printArray(arr2, 7);

        return 0;
}
