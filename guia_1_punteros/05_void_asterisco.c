// Intro teórica
// Demos un primer pasito hacia los tan temidos void*. El asterisco desde ya nos indica que es un puntero, pero un puntero a qué? En una función en C, cuando decimos que devuelve un void es porque no devuelve nada, así que éste es un puntero a la nada?!

// No. Un void* no es un puntero a la nada. En realidad, es casi lo contrario. El void* es lo que se llama un puntero comodín. Es decir, un puntero que puede apuntar a cualquier cosa. De antemano, no sabemos a qué apunta un void*, justamente porque puede apuntar a cualquier tipo de dato. Entonces, si una variable es de tipo void*, puede apuntar primero a un int y luego a un char, sin ningún problema.

// Tal vez no se ve el potencial de este tipo de puntero a primera vista, pero ya se aprenderá del tema durante el cuatrimestre. Sobre todo en la implementación de tdas.

// Consigna
// Se recibe un entrenador, que posee su nombre y una característica personal suya. Como queríamos que cada uno eligiese qué mencionar de ellos mismos, agregamos esa variable como un void*. Ahora, queremos saber cuál es esa característica, así que se pide una función que dado un entrenador, se devuelva esa característica.

#include "solucion.h"

void* caracteristica_personal(entrenador_t* entrenador){
    //tu código
    return entrenador->caracteristica;
}