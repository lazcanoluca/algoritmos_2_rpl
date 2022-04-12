#include "solucion.h"

/*
 * Se recibe un vector con las características mencionadas en el ejercicio y su tope.
 * También se recibe un segundo vector, que utilizaremos para almacenar el número de entrenador que posee más de la cantidad mínima de pokemones (pasada por parámetro).
 */
int entrenadores_con_cantidad_pokemones(
    int entrenadores_y_pokemones[MAX_ENTRENADORES],
    int tope,
    int cantidad_pokemones,
    int entrenadores_con_pokemones[MAX_ENTRENADORES]) {
    //tu código
    int maximo = 0;
    int ent_maximo = 0;
    int posicion = 0;

    for (int i = 1; i < tope; i+=2) {
        if (entrenadores_y_pokemones[i] > tope) {
            entrenadores_con_pokemones[posicion] = entrenadores_y_pokemones[i-1];
            posicion++;
            if (entrenadores_y_pokemones[i] > maximo) {
                maximo = entrenadores_y_pokemones[i];
                ent_maximo = entrenadores_y_pokemones[i-1];
            }
        }
    }

    return ent_maximo;
}