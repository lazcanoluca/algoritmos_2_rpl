#define MAX_ELEMENTOS 10

//Devuelve la suma de los elementos del vector, desde la posición 0 hasta el tope
int suma_de_elementos(int vector[MAX_ELEMENTOS], int tope){
    //escribe tu codigo acá
    int suma = 0;
    for (int i = 0; i < tope; i++) {
        suma += vector[i];
    }
    return suma;
}