// Se pide una función que reciba un string (vector de chars que tiene como último caracter un '\0') que posee un número, y que devuelva ese número en formato int.

// Por ejemplo, si se recibe el vector

// char vector_a_convertir[] = "489";

// Se pide que se devuelva un valor de tipo entero con ese mismo número.

// int valor_a_devolver = 489;

// Ayuda
// Muchas veces ocurrirá que querremos funciones, que resulta que ya fueron implementadas por otros programadores. Buscá si ya existe una función en alguna librería de C que permita esta funcionalidad. Recordá que tendrás que importar esa librería.

// Para importar una librería oficial de C, se utiliza la siguiente sintaxis
// #include <la_libreria_oficial_a_importar.h>

// Si, en cambio, queremos incluir una librería implementada por nosotros, se utiliza la siguiente sintaxis
// #include "la_libreria_mia_a_importar.h"

#include <stdlib.h>
/*
 * Se recibe un puntero a un string, y se devuelve el número que este string representa.
 */
int solucion(const char *string_a_convertir) {
    return atoi(string_a_convertir);
}