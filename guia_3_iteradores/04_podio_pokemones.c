#include "lista.c"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct pokemon {
    int fuerza;
    int rapidez;
    int inteligencia;
} pokemon_t;

pokemon_t *crear_pokemon(int fuerza, int rapidez, int inteligencia)
{
        pokemon_t *pokemon = calloc(1, sizeof(pokemon_t));
        if (!pokemon) return NULL;
        
        pokemon->fuerza = fuerza;
        pokemon->rapidez = rapidez;
        pokemon->inteligencia = inteligencia;

        return pokemon;
}

void podio_de_pokemones(lista_t* pokemones, lista_t* podio)
{
    if (!pokemones || !podio)
        return;
    
    pokemon_t *act;
    pokemon_t * primero;
    pokemon_t * segundo;
    pokemon_t * tercero;
    size_t i = 0;

    while ((act = (pokemon_t *)lista_elemento_en_posicion(pokemones, i))) {

        printf("\nrapidez actual: %i\n", act->rapidez);
        primero = ((pokemon_t *)lista_elemento_en_posicion(podio, 0));
        printf("rapidez primero: %i\n", primero ? primero->rapidez : -1);
        segundo = ((pokemon_t *)lista_elemento_en_posicion(podio, 1));
        printf("rapidez segundo: %i\n", segundo ? segundo->rapidez : -1);
        tercero = ((pokemon_t *)lista_elemento_en_posicion(podio, 2));
        printf("rapidez tercero: %i\n", tercero ? tercero->rapidez : -1);

        if (!tercero || (tercero && act->rapidez > tercero->rapidez)) {
            if (!segundo || (segundo && act->rapidez > segundo->rapidez)) {
                if (!primero || (primero && act->rapidez > primero->rapidez)) {
                    lista_insertar_en_posicion(podio, act, 0);
                    printf("agregado en primero: %i\n", act->rapidez);
                } else {
                    lista_insertar_en_posicion(podio, act, 1);
                    printf("agregado en segundo: %i\n", act->rapidez);
                }
            } else {
                lista_insertar_en_posicion(podio, act, 2);
                printf("agregado en tercero: %i\n", act->rapidez);
            }
        }

        if (lista_tamanio(podio) == 4)
                lista_quitar_de_posicion(podio, 3);
        i++;
    }

    return;
}

int main(int argc, char const *argv[])
{
        lista_t *pokemones = lista_crear();
        lista_t *podio = lista_crear();

        pokemon_t *pokemon1 = crear_pokemon( 0, 5, 0);
        pokemon_t *pokemon2 = crear_pokemon( 0, 2, 0);
        pokemon_t *pokemon3 = crear_pokemon( 0, 9, 0);
        pokemon_t *pokemon4 = crear_pokemon( 0, 3, 0);
        pokemon_t *pokemon5 = crear_pokemon( 0, 6, 0);
        pokemon_t *pokemon6 = crear_pokemon( 0, 7, 0);
        pokemon_t *pokemon7 = crear_pokemon( 0, 1, 0);
        pokemon_t *pokemon8 = crear_pokemon( 0, 8, 0);

        lista_insertar(pokemones, pokemon1);
        lista_insertar(pokemones, pokemon2);
        lista_insertar(pokemones, pokemon3);
        lista_insertar(pokemones, pokemon4);
        lista_insertar(pokemones, pokemon5);
        lista_insertar(pokemones, pokemon6);
        lista_insertar(pokemones, pokemon7);
        lista_insertar(pokemones, pokemon8);

        podio_de_pokemones(pokemones, podio);

        for (size_t i = 0; i < 9; i++) {
                printf("%i\n", ((pokemon_t *)lista_elemento_en_posicion(podio, i))->rapidez);
        }

        return 0;
}
