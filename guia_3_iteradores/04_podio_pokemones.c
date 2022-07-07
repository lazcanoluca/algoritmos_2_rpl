// Sigamos haciendo competir a nuestros pokemones. Para eso los capturan los entrenadores, no? Y de paso, practiquemos cómo usar el iterador interno.

// Dado un grupo de pokemones, se quiere saber cuáles ganarían la medalla de oro, plata y bronce en una carrera. Cada pokemon tiene su nivel de rapidez y por supuesto, el que mayor nivel tenga, más rápido corre.

// Para resolver el problema, se presenta la firma de una función que recibe el listado de todos los pokemones y una lista vacía donde se insertarán los pokemones que pertenecen al podio. Se pide que los pokemones del podio estén ordenados de la siguiente manera

// medalla de oro - medalla de plata - medalla de bronce

// No olvides revisar los parámetros! Si alguno de ellos es NULL, no se realiza ninguna operación. Por último, este ejercicio no requiere que utilices memoria dinámica de ningún tipo, así que no te preocupes por liberar memoria, nosotros nos encargamos de todo.

#include "solucion.h"
#include <stdio.h>

void podio_de_pokemones(lista_t* pokemones, lista_t* podio)
{
    if (!pokemones || !podio)
        return;
    
    pokemon_t *act;
    pokemon_t *primero;
    pokemon_t *segundo;
    pokemon_t *tercero;
    size_t i = 0;

    while ((act = (pokemon_t *)lista_elemento_en_posicion(pokemones, i))) {


        primero = (pokemon_t *)lista_elemento_en_posicion(podio, 0);
        segundo = (pokemon_t *)lista_elemento_en_posicion(podio, 1);
        tercero = (pokemon_t *)lista_elemento_en_posicion(podio, 2);

        if (!tercero || (tercero && act->rapidez > tercero->rapidez)) {
            if (!segundo || (segundo && act->rapidez > segundo->rapidez)) {
                if (!primero || (primero && act->rapidez > primero->rapidez)) {
                    lista_insertar_en_posicion(podio, act, 0);
                } else {
                    lista_insertar_en_posicion(podio, act, 1);
                }
            } else {
                lista_insertar_en_posicion(podio, act, 2);
            }
        }

        if (lista_elementos(podio) == 4)
            lista_borrar_de_posicion(podio, 3);
        i++;
    }

    return;
}