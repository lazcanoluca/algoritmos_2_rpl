#include <stdbool.h>
#define MAX_VECTOR 7
#define ERROR -1
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