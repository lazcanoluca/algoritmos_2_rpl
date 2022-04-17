// #include "solucion.h"
#include <stdbool.h>
#include <string.h>

typedef struct pokemon {
    char* nombre_pokemon;
    int fuerza;  
} pokemon_t;

typedef struct entrenador {
    char* nombre_entrenador;
    pokemon_t* pokemones;
    int tope;
} entrenador_t;

pokemon_t* pokemon_buscado(entrenador_t* entrenador, char* nombre_pokemon){
    if (entrenador == NULL || nombre_pokemon == NULL) return NULL;

    for (int i = 0; i < entrenador->tope; i++) {
        if (!strcmp((entrenador->pokemones)[i].nombre_pokemon, nombre_pokemon)) return &(entrenador->pokemones)[i];
    }

    return NULL;
}