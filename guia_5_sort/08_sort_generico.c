// Finalmente, llegamos a lo más genérico de lo genérico. Ahora no recibimos un puntero de void*s, ahora recibimos directamente un void*. Sabemos que se apunta a un vector, pero no sabemos de qué tipo de dato. Por fortuna, también recibimos la cantidad de elementos que hay en el vector y el tamaño de los elementos almacenados. También se recibe la función comparadora, que se comporta de la misma manera que la función anterior, a saber: La función comparadora devuelve un valor positivo si el primer elemento debería ir primero o un valor negativo si el segundo debería ir primero. En caso de que sean iguales, se devuelve 0.

#include <string.h>

void sort_generico(void *vector,
    int cant_elementos,
    int tamanio_un_elemento,
    int (*comparador)(const void *, const void*))
{
    if (!vector || !comparador)
        return;
    
    char *arr = (char *)vector;
    int size = tamanio_un_elemento;
    
    for (int k = cant_elementos - 1; k > 0; k--) {

        for (int i = 0; i < k; i++) {

            if (comparador( (const void *)(arr+size*i), (const void *)(arr+size*(i+1)) ) > 0) {
                char temp[size];
                char *a = (char *)arr;

                memcpy(temp, (a + size * i), size);
                memcpy((a + size * i), (a + size * (i+1)), size);
                memcpy((a + size * (i+1)), temp, size);
            }
        }

    }
}