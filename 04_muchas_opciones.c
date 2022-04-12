#define ERROR -1

/*
 * Se recibe una letra. Si ella se corresponde con alguna de las proveídas en el enunciado (A, R, L, G, F, O, T, C, R, B) se devuelve la cantidad de batallas ganadas por el pokemon respectivo.
 */
int batallas_ganadas(char letra){
    //tu código
    switch (letra) {
        case 'A': return 20;
        case 'R': return 17;
        case 'L': return 15;
        case 'G': return 30;
        case 'F': return 8;
        case 'O': return 27;
        case 'T': return 5;
        case 'C': return 39;
        case 'B': return 10;
        default: return -1;
    }
}