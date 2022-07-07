// Brock piensa que los músculos impresionan a las chicas, con la excusa de que quiere cuidar su salud, además de estar con una figura envidiable para el verano, sigue el consejo de la doctora Joy, anotar todas las calorías que ingiere en un casillero que corresponde a la hora y tipo de comida. Pero en los fines de semana… Se da sus buenos permitidos y no quiere ponerse a sumar.

// Ayúdale haciendo una función que recibe la matriz que contiene los valores de las calorías que consumió cada día y devuelva el total de calorías.

#include "solucion.h"

int sumar_fila(int cantidad_columnas, int matriz[MAX_TAM]){
    if (cantidad_columnas == 0) return matriz[0];
    return matriz[cantidad_columnas] + sumar_fila(cantidad_columnas-1, matriz);
}

int sumar_calorias(int cantidad_filas, int cantidad_columnas, int matriz[MAX_TAM][MAX_TAM]){
    if (cantidad_filas == 0) return sumar_fila(cantidad_columnas, matriz[0]);
    return sumar_fila(cantidad_columnas, matriz[cantidad_filas]) + sumar_calorias(cantidad_filas-1, cantidad_columnas, matriz); 
}