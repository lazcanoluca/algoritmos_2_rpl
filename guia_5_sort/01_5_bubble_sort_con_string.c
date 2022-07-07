// Continuamos con strings, pero ahora con una vuelta de tuerca. Recibimos un string desordenado y debemos ordenarlo de manera ascendente o descendente según el booleano pasado por parámetro. El string ordenado se devuelve en el segundo vector pasado por parámetro.

// Recordemos que un string ordenado ascendentemente es "ABCDEF".
// Mientras que uno ordenado de manera descendente es "FEDCBA".

#include "solucion.h"
#include <string.h>

void bubble_sort(char vector_desordenado[MAX_VECTOR],
    char vector_ordenado[MAX_VECTOR],
    bool ascendente)
{
    strcpy(vector_ordenado, vector_desordenado);

    for (int k = strlen(vector_ordenado)-1; k > 0; k--) {

        for (int i = 0; i < k; i++) {

            if (ascendente) {
                if (vector_ordenado[i] > vector_ordenado[i+1] ) {
                    char aux = vector_ordenado[i];
                    vector_ordenado[i] = vector_ordenado[i+1];
                    vector_ordenado[i+1] = aux;
                }
            } else {
                if (vector_ordenado[i] < vector_ordenado[i+1] ) {
                    char aux = vector_ordenado[i];
                    vector_ordenado[i] = vector_ordenado[i+1];
                    vector_ordenado[i+1] = aux;
                }
            }

        }
    }
}