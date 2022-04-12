#include <string.h>
#define MAX_NOMBRE_POKEMON 20
#define EXITO 0
#define ERROR -1

typedef struct pokemon{
    char nombre[MAX_NOMBRE_POKEMON];
    int victorias;
} pokemon_t;

int verificar_pokemon(
    pokemon_t pokemon,
    char nombre[MAX_NOMBRE_POKEMON],
    int cantidad_victorias) {

    if (!strcmp(nombre, pokemon.nombre) && cantidad_victorias == pokemon.victorias) return EXITO;
    return ERROR;
}