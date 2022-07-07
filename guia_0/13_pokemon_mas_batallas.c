// Terminemos esta guía a lo grande!

// Último ejercicio de archivos. Ahora, lo almacenado en el archivo corresponde a información de pokemones. No se sabe cuántos pokemones hay en el archivo, sabemos que no va a haber más de 10.

// También conocemos cómo están organizados:

// Vulpix;
// 15;20;19;
// Donde Vulpix es el nombre de ese pokemon, 15 es la cantidad de batallas ganadas, 20 es la cantidad de batallas perdidas y 19 es la cantidad de batallas empatadas.

// Se pide devolver el pokemon que compitió en más batallas, contando las que ganó, empató y perdió. Se puede asumir que no se va a recibir un archivo nulo.

// Y no te preocupes por el archivo, nosotros lo cerramos detrás de bambalinas ;)

#include "solucion.h"

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