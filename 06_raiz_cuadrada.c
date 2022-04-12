#define PRECISION 0.000001
#define ERROR -1

double raiz_cuadrada(double valor) {
    // Tu solución
    if (valor < 0) return ERROR;
    double estimacion = valor / 2;

    while (fabs(estimacion*estimacion - valor) >= PRECISION) {
        estimacion = (estimacion + valor/estimacion) / 2;
    }

    return estimacion;
}