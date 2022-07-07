// Lo prometido es deuda, aquí está el link de introducción de Algo1Mendez:
// https://www.youtube.com/watch?v=aXhsI_8KUy0&ab_channel=algo1mendez

// Ahora sí, empecemos con el método de ordenamiento más conocido: Bubblesort.

// Se recibe un vector de caracteres, que deseo ordenar de manera ascendente o descendente, dependiendo del booleano pasado por parámetro. También se recibe el vector donde quiero que estén los elementos ordenados.

// Por si no tienen ni idea de sobre qué les estoy hablando, acá les dejo un video de Algo1Mendez donde se explica este algoritmo: https://www.youtube.com/watch?v=QgU47ejV7mg&ab_channel=algo1mendez

// A saber, un string ordenado ascendentemente es "ABCDEF", mientras que uno ordenado de manera descendente es "FEDCBA".

#include "solucion.h"
#include <string.h>

void bubble_sort(char vector_desordenado[MAX_VECTOR],
    char vector_ordenado[MAX_VECTOR],
    int tope,
    bool ascendente)
{
    strcpy(vector_ordenado, vector_desordenado);

    for (int k = tope-1; k > 0; k--) {

        for (int i = 0; i < k; i++) {

            if (ascendente) {
                if (vector_ordenado[i] > vector_ordenado[i+1] ) {
                    int aux = vector_ordenado[i];
                    vector_ordenado[i] = vector_ordenado[i+1];
                    vector_ordenado[i+1] = aux;
                }
            } else {
                if (vector_ordenado[i] < vector_ordenado[i+1] ) {
                    int aux = vector_ordenado[i];
                    vector_ordenado[i] = vector_ordenado[i+1];
                    vector_ordenado[i+1] = aux;
                }
            }

        }
    }
}