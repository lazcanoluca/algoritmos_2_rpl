Intro teórica
// Vimos lo importante que son los punteros para el manejo de vectores. También vimos cómo podemos modificar más de una variable en la misma función con punteros.

// Uno de los grandes pilares de punteros que nos falta aprender es cómo relacionamos punteros con…. funciones!
// En caso de que lo necesites, en la página de la materia hay un repaso de punteros a funciones.

// Ejercicio
// Se recibe un número, un booleano y la función a llamar. Si el booleano pasado por parámetro es true, se pide invocar la función pasada con la variable numero como parámetro, y devolver lo que esa función a su vez devuelva. En caso de que el booleano sea false, se pide devolver el número recibido.

// En caso de que la función pasada por parámetro sea nula, se debe devolver el número pasado por parámetro, independientemente del valor del booleano.

// Tené en cuenta que un puntero a función también puede ser NULL y por lo tanto es una función que no debe ser invocada. En este caso, por mas que el booleano así lo indique, no se debe invocar la función.

#include <stdbool.h>

int solucion(int numero, bool efectuar_operacion, int (*funcion)(int)){
    //tu código
    if (!funcion) return numero;
    return efectuar_operacion ? funcion(numero) : numero;
}