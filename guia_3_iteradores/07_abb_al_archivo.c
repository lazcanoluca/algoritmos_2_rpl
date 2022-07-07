// Terminemos la guía a lo grande. Se tiene un árbol que contiene pokemones. Se pide escribirlos en el archivo pasado por parámetro con el siguiente formato:

// nombre_del_pokemon;nivel;fuerza;inteligencia;carisma\n

// Un ejemplo sería
// Pikachu;5;20;18;40

// Hacer uso del iterador interno del abb para modifcar el archivo pasado por parámetro y escribir en él los pokemones contenidos en el árbol, en orden alfabético.

// No olvides revisar los parámetros!

#include "solucion.h"

bool escribir_en_archivo(void *_pokemon, void *_archivo)
{
    pokemon_t *pokemon = (pokemon_t *)_pokemon;
    FILE *archivo = (FILE *)_archivo;

    fprintf(archivo, "%s;%i;%i;%i;%i\n", pokemon->nombre, pokemon->nivel, pokemon->fuerza, pokemon->inteligencia, pokemon->carisma);

    return true;
}

void escribir_pokemones_en_archivo(abb_t* pokemones, FILE* archivo)
{
    if (!pokemones || !archivo) return;

    abb_con_cada_elemento(pokemones, ABB_RECORRER_INORDEN, escribir_en_archivo, archivo);
}