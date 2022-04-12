#define MAX_NOMBRE_POKEMON 20
#define MAX_VECTOR 10
#include <string.h>

typedef struct pokemon{
    char nombre[MAX_NOMBRE_POKEMON];
    int victorias;
} pokemon_t;

pokemon_t pokemon_con_mas_victorias(
    pokemon_t pokemones[MAX_VECTOR],
    int tope_vector){
    //tu código
    pokemon_t mayor = pokemones[0];

    for (int i = 0; i < tope_vector; i++) {
        if (pokemones[i].victorias > mayor.victorias || (
            pokemones[i].victorias == mayor.victorias &&
            strcmp(pokemones[i].nombre, mayor.nombre) < 0) ) {
            mayor = pokemones[i];
        }
    }
    return mayor;
}