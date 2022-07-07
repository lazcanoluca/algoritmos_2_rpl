// En el ejercicio anterior, vimos cómo crear un vector de chars para armar frases o palabras. Sin embargo, el vector de chars no era suficiente, necesitabas que te dé el tope del vector. Sino, cómo sabías cuántos elementos iterar?
// A su vez, cualquier operación que quieras con estos vectores, los tendrías que hacer a mano. Compararlos, buscar cierta letra en el vector, entre otras…

// Por fortuna para nosotros, otros programadores ya se encargaron de programar éstas y otras funciones con relación a vectores de chars. Estas funciones las obtenemos al importar la librería string.h. Un string es un vector de caracteres con un pequeño cambio, que hace una gran diferencia. Al final de la palabra o frase se agrega el caracter '\0'.

// De esta manera, no necesitamos saber cuántos elementos tiene un string, ni necesitamos recibir un int tope; con saber dónde está el caracter '\0', sabemos la longitud del string. Pero… uno no sabe a primera vista dónde está el caracter '\0', o si incluso tu vector de chars lo posee.

// Para averiguarlo, se pide implementar la función longitud_string, en la que se recibe un vector de chars y se debe devolver la cantidad de elementos que el mismo posee (determinado por el '\0') o ERROR (-1) si el vector no posee ese caracter.

// Atención, no se debe contar el caracter '\0' como parte de la palabra. El siguiente string

// char string[MAX_STRING];
// strcpy(string, "Mi hermoso string");
// Es tratado como el siguiente vector

// char string[MAX_STRING] = {'M', 'i', ' ', 'h', 'e', 'r', 'm', 'o', 's', 'o', ' ', 's', 't', 'r', 'i', 'n', 'g', '\0'};

// Y posee 17 elementos, desde la letra 'M' hasta la letra 'g' inclusive.

#include "solucion.h"
/*
 * Se devuelve la cantidad de elementos válidos que el string posee
 * o -1 si no se encuentra el caracter '\0' en el vector
 */
int longitud_string(char string[MAX_STRING]){
    //tu código
    for (int i = 0; i < MAX_STRING; i++) {
        if (string[i] == '\0') return i;
    }
    return -1;
}