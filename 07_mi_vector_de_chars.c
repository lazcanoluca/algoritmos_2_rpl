#include <stdbool.h>
#define MAX_VECTOR 15

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