// Ash Ketchum quiere convertirse en Maestro Pokémon, el más alto grado de entrenamiento Pokémon, para lograrlo necesita entrenar a sus pokémones en batallas y estar también físicamente en forma, para lograrlo decide seguir el consejo del doctor Proctor, hacer sentadillas y la cantidad que debe hacer tiene que ser un números primo. Como a veces se olvida si un número es primo o no, te pide ayuda, para que crees un programa en el cual, le diga a Ash si la cantidad de sentadillas que desea realizar es un número primo en ese caso la función devolverá cero, y si no lo es, el próximo primo de la cantidad ingresada.

#include <stdio.h>

int es_primo_t(size_t num, size_t div) {
    if (num % div == 0) return 0;
    if (div*div > num) return 1;
    return es_primo_t(num, div+1);
}

int es_primo(size_t num) {
    return es_primo_t(num, 2);
}

size_t recursiva(size_t numero) {
    if (es_primo(numero)) return numero;
    else return recursiva(numero+1);
}

int devuelve_siempre_numero_primo(size_t cantidad_ingresada) {
    if (es_primo(cantidad_ingresada)) return 0;
    else return (int)recursiva(cantidad_ingresada+1);
    return -1;
}