// En el apunte de punteros a función y en las clases prácticas se vio que es posible programar un sort que pueda ordenar cualquier vector, independientemente del tipo de dato que él almacene.

// Como siempre, para realmente entender un concepto, hay que ponerlo en práctica. Así que programemos un sort que pueda ordenar un vector de punteros a void*; es decir, un sort que pueda ordenar un vector de punteros, y esos punteros pueden apuntar a cualquier tipo de dato.

// Para lograrlo, se tiene la firma de esta función, que recibe el vector de punteros, el tope de ese vector y una función que compara dos elementos del vector. La función comparadora devuelve un valor positivo si el primer elemento debería ir primero o un valor negativo si el segundo debería ir primero. En caso de que sean iguales, se devuelve 0.

void sort_semi_generico(void** vector,
    int cant_elementos,
    int (*comparador) (void*, void*))
{
    if (!vector || !comparador) return;

    for (int k = cant_elementos - 1; k > 0; k--) {
        
        for (int i = 0; i < k; i++) {
            
                if (comparador(vector[i], vector[i+1]) > 0) {
                    void* aux = vector[i];
                    vector[i] = vector[i+1];
                    vector[i+1] = aux;
                }
        }
    }
}