// Ya tenemos la función sift_up, genial. Ahora sí, programemos heap_insertar. Se recibe el vector del heap, su tope y el elemento a insertar.

// No necesitás programar sift_up de nuevo, nosotros la agregamos por vos detrás de cámara ;)

extern void sift_up(int* vector, int tope);

void heap_insertar(int* vector, int* tope, int elemento)
{
    ++(*tope);
    vector[*tope] = elemento;
    sift_up(vector, *tope);
}