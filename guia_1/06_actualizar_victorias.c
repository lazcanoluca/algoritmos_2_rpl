
// Ya sabemos devolver un void*, ahora aprendamos a usarlo.

// Queremos actualizar la cantidad de entrenadores que cierto entrenador venció en el torneo. Para hacerlo, se reciben dos void*. Sabemos que el primero representa un entrenador y el segundo representa un entero. El entero es la cantidad de otros entrenadores que el nuestro venció en la última batalla.

// Por ejemplo, si recibo un entrenador que posee la variable cant_vencidos = 18 y el número 2, al finalizar la función el entrenador recibido debería tener 20 victorias almacenadas.

// Recordá chequear los parámetros que se reciben. Tiene sentido que la cantidad extra sea negativa? Y cero? En caso de que alguno de los parámetros no sea válido o carezca de sentido, no se modifica la cantidad de vencidos.

#include "solucion.h"

void actualizar_victorias(void* entrenador, void* cant_extra){
    //tu código
    if (!entrenador || !cant_extra || *(int *)cant_extra <= 0) return;
    ((entrenador_t *)entrenador)->cant_vencidos += *(int *)cant_extra;
}