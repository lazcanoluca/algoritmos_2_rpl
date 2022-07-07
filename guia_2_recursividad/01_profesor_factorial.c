// El Profesor Samuel Oak se puso a estudiar la genética de los pokemones para saber si era posible crear nuevas especies. Para esto se compró un termociclador de PCR (REACCIÓN EN CADENA DE LA POLIMERASA), pero le vino fallada y no sabe como calcular cuántas especies puede crear con las muestras que tiene. Entonces, como sabe que sos muy bueno programando, te pide ayuda para que realices un algoritmo que dado un número de muestras genéticas le devuelva el número de combinaciones posibles.

// Ejemplo: si en el tubo de ensayo se colocan 3 muestras, todas las combinaciones posibles son 6.

#include "solucion.h"

int calcular_combinaciones_posibles(int muestras_ADN)
{
    if (muestras_ADN > 1) return muestras_ADN * calcular_combinaciones_posibles(muestras_ADN - 1);
    return 1;
}