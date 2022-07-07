// Seguimos con otro método de ordenamiento, el llamado Selección. Al igual que en el ejercicio pasado, se recibe un vector de caracteres, que se desea ordenar de manera ascendente o descendente, dependiendo del booleano valor pasado por parámetro. También se recibe el vector donde se espera que estén los elementos ordenados.

// A saber,
// Un string ordenado ascendentemente es "ABCDEF".
// Mientras que uno ordenado de manera descendente es "FEDCBA".

// Si no conocen este algoritmo y cómo se construye, les dejo un link a un video del tema, de la materia Algo1Mendez https://www.youtube.com/watch?v=8L5yhtHws-I&ab_channel=algo1mendez

#include "solucion.h"
#include <string.h>

void selection_sort(char vector_desordenado[MAX_VECTOR],
    char vector_ordenado[MAX_VECTOR],
    int tope,
    bool ascendente)
{
        strcpy(vector_ordenado, vector_desordenado);

        for (int i = 0; i < strlen(vector_ordenado)-1; i++) {
            
            int min = i;

            for (int j = i+1; j < strlen(vector_ordenado); j++) {

                if (ascendente) {
                    if (vector_ordenado[j] < vector_ordenado[min]) {
                        char aux = vector_ordenado[j];
                        vector_ordenado[j] = vector_ordenado[min];
                        vector_ordenado[min] = aux;
                    }
                } else {
                    if (vector_ordenado[j] > vector_ordenado[min]) {
                        char aux = vector_ordenado[j];
                        vector_ordenado[j] = vector_ordenado[min];
                        vector_ordenado[min] = aux;
                    }
                }

            }
        }
}