
// Afiancemos nuestros conocimientos del iterador externo con este ejercicio. Tenemos una lista de entrenadores, y queremos saber cuál es el que ganó más batallas. En caso de que dos entrenadores hayan ganado la misma cantidad de batallas, se debe devolver el que menos batallas perdió de los dos. Al igual que en el ejercicio anterior, se recibe el iterador de la lista.

// La estructura del entrenador se encuentra en el archivo solucion.h. No olvidar revisar los parámetros recibidos! Se puede recorrer una lista con el iterador, si ese iterador es nulo? En caso de recibirse un parámetro NULL, devolver NULL.

#include "solucion.h"

entrenador_t* entrenador_con_mas_victorias(lista_iterador_t* it_lista)
{
    if (!it_lista)
        return NULL;
    
    entrenador_t *act;
    entrenador_t *vic = lista_iterador_elemento_actual(it_lista);

    while ((act = (entrenador_t *)lista_iterador_elemento_actual(it_lista))) {

        if (act->b_ganadas > vic->b_ganadas || 
            (act->b_ganadas == vic->b_ganadas &&
                act->b_perdidas < vic->b_perdidas))
            vic = act;
        
        lista_iterador_avanzar(it_lista);
    }

    return vic;
}