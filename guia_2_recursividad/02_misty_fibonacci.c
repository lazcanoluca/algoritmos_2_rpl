int calcular_fibonacci(int numero_semillas_girasol){
    if (numero_semillas_girasol == 0) return 0;
    else if (numero_semillas_girasol == 1) return 1;
    else return calcular_fibonacci(numero_semillas_girasol - 1) + calcular_fibonacci(numero_semillas_girasol - 2);
}