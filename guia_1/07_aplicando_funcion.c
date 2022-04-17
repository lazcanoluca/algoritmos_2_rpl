#include <stdbool.h>

int solucion(int numero, bool efectuar_operacion, int (*funcion)(int)){
    //tu código
    if (!funcion) return numero;
    return efectuar_operacion ? funcion(numero) : numero;
}