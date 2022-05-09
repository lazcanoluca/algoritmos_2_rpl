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

int main(int argc, char const *argv[])
{
    int num = 120;
    printf("%i\n", devuelve_siempre_numero_primo(num));
    printf("%i es primo?: %i\n", num, es_primo(num));
    return 0;
}
