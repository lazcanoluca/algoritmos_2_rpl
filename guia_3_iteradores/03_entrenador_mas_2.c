// Al hacer el ejercicio anterior, tal vez te preguntaste si era más sencillo resolverlo con un iterador interno, en vez del externo. Bueno, no hace falta que te lo sigas preguntando, lo vamos a hacer ahora!

// Sí, les estamos pidiendo resolver el mismo ejercicio del punto pasado, pero ahora con un iterador interno. Así entendemos bien la diferencia entre ambos y aprendemos cuándo conviene usar uno vs el otro.

// Se recibe la lista de entrenadores y se pide programar la función entrenador_con_mas_victorias, de la cual ya reciben la firma, y una función para comparar entrenadores con el siguiente criterio:

// Devolver el entrenador con más batallas ganadas.
// Si hay más de uno con la misma cantidad de batallas ganadas, devolver el que menor cantidad de batallas perdió.
// Nosotros nos aseguramos de que haya un solo entrenador en la lista que cumpla estas condiciones.

// En este ejercicio, aunque no es necesario, te permitimos pispear el archivo lista.h y usar la función lista_primero;) A su vez, tenemos acceso al archivo lista_iterador.h, donde está la firma del iterador interno.

// No olvides verificar parámetros! Si se recibe una lista NULL, devolver NULL.

// Por último y como siempre, no te preocupes por liberar la lista, nosotros nos ocupamos de eso detrás de cámara.

#include "solucion.h"

entrenador_t* entrenador_con_mas_victorias(lista_t* entrenadores){
    if (!entrenadores || lista_vacia(entrenadores))
        return NULL;
    
    entrenador_t *act;
    entrenador_t *vic = (entrenador_t *)lista_primero(entrenadores);
    int i = 0;
    
    while (act = (entrenador_t *)lista_elemento_en_posicion(entrenadores, i)) {

        if (act->b_ganadas > vic->b_ganadas || 
            (act->b_ganadas == vic->b_ganadas &&
                act->b_perdidas < vic->b_perdidas))
            vic = act;
        
        i++;
    }

    return vic;
    
}