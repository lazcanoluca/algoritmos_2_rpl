// Intro teórica
// Ya hicimos un ejercicio para empezar con ints y estructuras iterativas. Continuemos y veamos ahora el tipo de dato char.

// Este tipo de dato se utiliza para almacenar una letra o símbolo especificado en el código ASCII. Para definir una variable de tipo char en C, se utiliza la siguiente sintaxis: char mi_letra = 'A';

// Notar las comillas simples '' y el hecho de que solamente se escribió una letra.
// Si en el código se desea escribir la letra A, se debe hacer uso de la misma sintaxis.

// if (mi_letra == 'A') {

//   ...

// }
// Para más información de comparación de caracteres, les dejo el siguiente link de StackOverflow: https://stackoverflow.com/questions/22736348/char-comparison-in-c/22736397

// Ejercicio
// Ahora, les damos la firma de una función que recibe un vector, su tope y la letra a buscar. Devolver en dónde se encuentra la letra o -1 si no se encuentra en el vector. Para seguir las buenas prácticas, ya les definimos la variable ERROR en solucion.h;)

#include "solucion.h"

/*
 * Se recibe un vector de letras, su tope y la letra a buscar.
 * Se devuelve la posición de la letra o -1 en caso de que no se encuentre.
*/
int posicion_letra(char vector[MAX_VECTOR], int tope, char letra){
    //tu código
    int i = 0;
    while (i < tope) {
        if (vector[i] == letra) return i;
        i++;
    }
    return -1;
}