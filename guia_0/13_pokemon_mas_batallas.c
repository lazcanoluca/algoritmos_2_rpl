#include <string.h>
#include <stdio.h>
#define MAX_NOMBRE 30
#define MAX_POK 10

typedef struct pokemon{
    char nombre[MAX_NOMBRE];
    int b_ganadas;
    int b_perdidas;
    int b_empatadas;
} pokemon_t;

// ENTREGA

pokemon_t pokemon_con_mas_batallas(FILE* archivo) {

    pokemon_t pokemon;

    char nombre[MAX_NOMBRE];
    int g = 0, p = 0, e = 0, max_g = 0, max_p = 0, max_e = 0;
    int max = 0;
    char max_nombre[MAX_NOMBRE];

    char linea[1000];
    int num_linea = 0;
    
    while (fgets(linea, MAX_NOMBRE+2, archivo) != NULL) {

        if (num_linea % 2 == 0) sscanf(linea, "%[^;\n]", nombre);
        else sscanf(linea, "%i;%i;%i;", &g, &p, &e);

        if (g + p + e > max) {
            max = g + p + e;
            max_g = g;
            max_p = p;
            max_e = e;
            strcpy(max_nombre, nombre);
        }

        num_linea++;
    }

    strcpy(pokemon.nombre, max_nombre);
    pokemon.b_ganadas = max_g;
    pokemon.b_perdidas = max_p;
    pokemon.b_empatadas = max_e;

    return pokemon;
}

// FIN ENTREGA

int main(int argc, char const *argv[])
{
    FILE *archivo = fopen("batallas.txt", "r");
    char nombre[MAX_NOMBRE];
    pokemon_t pokemon = pokemon_con_mas_batallas(archivo);
    printf("%s: %i\n", pokemon.nombre, pokemon.b_ganadas + pokemon.b_perdidas + pokemon.b_empatadas);
    fclose(archivo);
    return 0;
}
