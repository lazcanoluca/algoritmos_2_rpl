void swap(int* primer_valor, int* segundo_valor){
    //tu código
    int aux = *primer_valor;
    *primer_valor = *segundo_valor;
    *segundo_valor = aux;
    return;
}