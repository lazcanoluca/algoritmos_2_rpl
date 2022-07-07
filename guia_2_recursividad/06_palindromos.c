// Meowth, que es un Pokémon muy inteligente, se dio cuenta, mientras aprendía a leer, que hay palabras que leyéndolas de izquierda a derecha o derecha a izquierda tienen el mismo significado y se leen igual. Las tiene escritas en una libreta, pero como no confía qué tan bien escribe, te pide que confecciones una función para que le diga si es una palabra palíndromo o no.

#include "solucion.h"

bool buscar_polindromo(const char *cadena, size_t inicio, size_t fin){
    if (inicio >= fin) return true;
    if (*(cadena+inicio) != *(cadena+fin)) return false;
    return buscar_polindromo(cadena, ++inicio, --fin);
}