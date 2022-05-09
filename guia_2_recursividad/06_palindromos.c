bool buscar_polindromo(const char *cadena, size_t inicio, size_t fin){
    if (inicio >= fin) return true;
    if (*(cadena+inicio) != *(cadena+fin)) return false;
    return buscar_polindromo(cadena, ++inicio, --fin);
}