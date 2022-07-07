// Ya entendimos sift_up y cómo usarla en heap_insertar. Pasemos a entender sift_down, que de manera análoga nos sirve para heap_extraer_raiz.

// Se recibe el vector de enteros, el tope del mismo y la posición a partir de la cual hay que aplicar la función.

void sift_down(int* vector, int tope, int pos_actual) {
    if (!vector) return;

    int max = 2*pos_actual+1;
    int aux;

    while (max <= tope) {
        if (max < tope) 
            if (vector[max+1] > vector[max])
                max++;
            
        if (vector[pos_actual] >= vector[max])
            return;
        
		aux = vector[pos_actual];
		vector[pos_actual] = vector[max];
		vector[max] = aux;

        pos_actual = max;
        max = 2*pos_actual+1;

    }
}