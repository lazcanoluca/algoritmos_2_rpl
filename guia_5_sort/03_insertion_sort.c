
// Para finalizar los tres métodos de ordenamiento que se ven en Algo1, se pide implementar el método de inserción.

// Si no lo conocen, aquí les dejamos un link de la explicación del mismo de Algo1Mendez https://www.youtube.com/watch?v=NkRFb9t0OXI&ab_channel=algo1mendez

// A saber,
// Un string ordenado ascendentemente es "ABCDEF", mientras que uno ordenado de manera descendente es "FEDCBA".

#include "solucion.h"

void insertion_sort(char vector_desordenado[MAX_VECTOR],
    char vector_ordenado[MAX_VECTOR],
    int tope,
    bool ascendente)
{
    strcpy(vector_ordenado, vector_desordenado);

    for (int i = 1; i < tope; i++) {
        int num = vector_ordenado[i];
        int j = i-1;

        if (ascendente) {

            while (j >= 0 && vector_ordenado[j] > num) {
                vector_ordenado[j+1] = vector_ordenado[j];
                j = j - 1;
            }

        } else {
          
            while (j >= 0 && vector_ordenado[j] < num) {
                vector_ordenado[j+1] = vector_ordenado[j];
                j = j - 1;
            }

        }

        vector_ordenado[j + 1] = num;
    }
}