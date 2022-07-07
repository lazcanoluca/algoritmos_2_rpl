// Último ejercicio con iterador interno. Ahora, queremos buscar los entrenadores que ganaron más de cierta cantidad de batallas. Para eso, se recibe la lista de todos los entrenadores y una lista vacía a la cual se le debe agregar cada entrenador que cumpla las condiciones. Ah, que cuántas batallas tienen que haber ganado? Eso lo recibís por parámetro ;)

// No olvides revisar los parámetros! Si alguna de las listas es NULL, no se realiza ninguna operación. Si la cantidad de batallas es menor a 0, tampoco se realiza ninguna operación. Por último, este ejercicio no requiere que pidas ni liberes memoria dinámica, así que no te preocupes por eso, nosotros lo resolvemos.

#include "solucion.h"

void entrenadores_con_muchas_victorias(
    lista_t* entrenadores,
    lista_t* entrenadores_ganadores,
    int batallas_ganadas)
{
    if (!entrenadores || !entrenadores_ganadores)
        return;
    
    entrenador_t *act;
    int i = 0;

    while ((act = (entrenador_t *)lista_elemento_en_posicion(entrenadores, i))) {
        if (act->b_ganadas > batallas_ganadas)
            lista_insertar(entrenadores_ganadores, act);
        
        i++;
    }

}