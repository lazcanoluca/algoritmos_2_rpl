
// Exprimamos este ejercicio un poquito más. Resulta que ahora nuestro pokemon no posee una variable float fuerza, sino que posee float* fuerza. Alguien más ya realizó los cálculos necesarios para la nueva fuerza, y se la recibe por parámetro. Se pide actualizar la fuerza del pokemon con la pasada.

// No te preocupes por temas de memoria dinámica, nosotros nos encargamos de todo detrás de escena ;)

// Como siempre, no tiene sentido tener una fuerza negativa. Si se recibe una, no se modifica la fuerza del pokemon.

#include "solucion.h"

void actualizar_fuerza(pokemon_t* pokemon, float* nueva_fuerza){
    //tu código
    if (*nueva_fuerza>=0) pokemon->fuerza = nueva_fuerza;
}