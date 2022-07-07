// Unos ejercicios atrás vimos el uso del tipo de dato char para almacenar letras. Ahora, vamos a extender este concepto y almacenar palabras. Para ello, crearemos vectores de chars.

// La sintaxis es la misma que se utiliza para vectores de ints, a saber
// char palabra[MAX_PALABRA] = {'p', 'a', 'l', 'a', 'b', 'r', 'a'};

// También podemos agregar espacios y tenemos una frase
// char frase[MAX_PALABRA] = {'M', 'i', ' ', 'f', 'r', 'a', 's', 'e'};

// Para saber cuántos elementos tiene el vector, se hace uso de un int tope, al igual que en los vectores de ints. Recordemos que si el vector tiene 6 elementos válidos (por ejemplo, la palabra "jungla"), la variable int tope vale 6 y estos elementos están en las posiciones 0, 1, 2, 3, 4, 5.

// Se requiere una función que nos diga si la palabra pasada por parámetro contiene a la letra pasada por parámetro.

#include "solucion.h"

/*
 * Dado un vector de chars, su tope y la letra a buscar
 * se devuelve true si la letra se encuentra aunque sea una vez en la 
 * palabra, y false si la letra no se encuentra en la palabra.
*/
bool contiene_letra(char palabra[MAX_VECTOR], int tope, char letra){
    //tu código
    for (int i = 0; i < tope; i++) {
        if (palabra[i] == letra) return true;
    }
    return false;
}