#include <stdio.h>
#define MAX_TAM 20

int sumar_fila(int cantidad_columnas, int matriz[MAX_TAM]){
    if (cantidad_columnas == 0) return matriz[0];
    return matriz[cantidad_columnas] + sumar_fila(cantidad_columnas-1, matriz);
}

int sumar_calorias(int cantidad_filas, int cantidad_columnas, int matriz[MAX_TAM][MAX_TAM]){
    if (cantidad_filas == 0) return sumar_fila(cantidad_columnas, matriz[0]);
    return sumar_fila(cantidad_columnas, matriz[cantidad_filas]) + sumar_calorias(cantidad_filas-1, cantidad_columnas, matriz); 
}

// TENER EN CUENTA QUE EN EL ENUNCIADO LE LLAMAN "CANTIDAD_FILAS" Y "CANTIDAD_COLUMNAS" A LA CANTIDAD DE FILAS/COLUMNAS MENOS UNO.
// ¿POR QUÉ? NO SÉ, QUIÉN ESCRIBIÓ EL EJERCICIO NO DISTINGUE CANTIDAD E ÍNDICE PARECE.

int main(int argc, char const *argv[])
{
    int matriz[MAX_TAM][MAX_TAM] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    printf("%i", sumar_calorias(2,3, matriz));
    return 0;
}
