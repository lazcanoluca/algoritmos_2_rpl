// Habiendo repasado los iteradores de la lista, pasamos ahora al iterador de árbol. Misma idea que para los iteradores de lista; cuando usamos el árbol, no podemos acceder a la estructura del mismo. Entonces, si queremos aplicar cierta función a cada nodo del árbol, tenemos el iterador de abb.

// Empecemos con algo simple. Tenemos un árbol de números (ints), y queremos meter los números impares en un nuevo árbol.

// Aviso, este ejercicio no implica manejo de memoria dinámica. No te preocupes por crear o liberar memoria, nosotros nos ocupamos de eso.

// No olvides revisar los parámetros!

#include "solucion.h"

bool es_impar(int x)
{
    return x % 2 == 0 ? false : true;
}

bool agregar(void *num, void *arbol)
{
    if ( es_impar(*(int *)num) )
        arbol_insertar((abb_t *)arbol, (int *)num);
    
    return true;
}

void elementos_impares(abb_t* abb_original, abb_t* abb_impares)
{
    if (!abb_original || !abb_impares)
        return;
    
    abb_con_cada_elemento(abb_original, ABB_RECORRER_PREORDEN, agregar, abb_impares);
}