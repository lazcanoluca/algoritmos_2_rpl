// Misty, fascinada con la belleza de la naturaleza de pueblo Paleta, se puso a observar detalladamente el patrón de las semillas dentro de la cabeza de un girasol y noto algo muy interesante, que la secuencia crece en espirales desde el centro hacia afuera. Cada número de la secuencia es la suma de los dos anteriores, Misty desea contar sin tener en cuenta esta secuencia y te pide que realices un algoritmo que dado un número devuelva la suma de sus anteriores.

#include "solucion.h"

int calcular_fibonacci(int numero_semillas_girasol){
    if (numero_semillas_girasol == 0) return 0;
    else if (numero_semillas_girasol == 1) return 1;
    else return calcular_fibonacci(numero_semillas_girasol - 1) + calcular_fibonacci(numero_semillas_girasol - 2);
}