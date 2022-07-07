// Se recibe un entrenador que posee varios pokemones en su vector de pokemones. También se recibe el nombre de un pokemon a buscar. Si se lo encuentra en el listado, devolver ese pokemon. Si no se lo encuentra, devolver NULL.

// Recordar que el entrenador pasado o el nombre pasado puede ser NULL. Se puede ingresar a los pokemones de un NULL? Tiene sentido que un nombre sea NULL? En cualquier caso, devolver NULL también.

#include "solucion.h"
#include <stdbool.h>
#include <string.h>

pokemon_t* pokemon_buscado(entrenador_t* entrenador, char* nombre_pokemon){
    if (entrenador == NULL || nombre_pokemon == NULL) return NULL;

    for (int i = 0; i < entrenador->tope; i++) {
        if (!strcmp((entrenador->pokemones)[i].nombre_pokemon, nombre_pokemon)) return &(entrenador->pokemones)[i];
    }

    return NULL;
}