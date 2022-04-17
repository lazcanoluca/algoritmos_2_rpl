#define MAX 10
#include <stdlib.h>
#include <stdbool.h>

typedef struct pokemon {
    int rapidez;
    int inteligencia;
    int carisma;
    int fuerza;
} pokemon_t;

pokemon_t* pokemon_mas_victorioso(
    pokemon_t* poke1,
    pokemon_t* poke2,
    pokemon_t* (*funciones_batallas[MAX])(pokemon_t*, pokemon_t*),
    int tope) {

        if (!poke1 || !poke2 || !funciones_batallas) return NULL;

        int g_poke1 = 0;
        int g_poke2 = 0;

        for (int i = 0; i < tope; i++) {
            if (funciones_batallas[i](poke1, poke2) == poke1) g_poke1++;
            else g_poke2++;
        }

        return g_poke1 > g_poke2 ? poke1 : poke2;
}