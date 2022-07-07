// Al utilizar strings, dimos un primer paso para aprender cómo podemos usar los tipos de datos nativos de C para "crear otros". Ok, no, no existe el tipo de dato string en C, sino que los declaramos como vectores de chars y usamos las funciones de la librería string.h.

// Ahora, demos un par de pasos más, y aprendamos cómo realmente crear un nuevo tipo de dato. Es decir, aprendamos a crear structs.

// Un struct es la definición de un tipo de dato compuesto de variables primitivas (u otros structs, pero eso ya lo veremos más adelante). Aquí se presenta un struct de un pokémon (en solucion.h). Un pokemon, según esta definición, posee un nombre en formato string (termina con un '\0'), y la cantidad de victorias de ese pokemon.

// Se pide una función que verifique que los datos almacenados en el pokemon pasado sean los correctos. Para eso, se recibe el nombre y la cantidad de victorias que debería tener.

// Si los datos enviados son correctos, se devuelve 0 (se declaró la constante EXITO). Si algún dato enviado es incorrecto, se devuelve -1 (se declaró ERROR).

// Ya incluimos la librería string.h.

#include "solucion.h"

int verificar_pokemon(
    pokemon_t pokemon,
    char nombre[MAX_NOMBRE_POKEMON],
    int cantidad_victorias) {

    if (!strcmp(nombre, pokemon.nombre) && cantidad_victorias == pokemon.victorias) return EXITO;
    return ERROR;
}