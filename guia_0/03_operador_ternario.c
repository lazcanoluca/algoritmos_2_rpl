// La Conjetura de Collatz es un problema matemático que hasta la fecha no se ha podido resolver. Les dejo un link por si les interesa saber más del tema:
// https://www.youtube.com/watch?v=094y1Z2wpJg&ab_channel=Veritasium

// Aunque no sepamos cómo resolverlo, vamos a proveer una función que decida el siguiente valor en la sucesión, haciendo uso de un operador ternario.

// El operador ternario es una opción muy compacta de escribir un if else. Las sentencias dentro del operador ternario deben ser solamente de una línea.

// Sabiendo que la estructura de un operador ternario es la siguiente

// (*mi condición a verificar*) ? *lo que hago si se cumple la condición* : *lo que hago si NO se cumple la condición* ;

// Proponga una solución utilizando el operador ternario para ayudar a resolver la Conjetura de Collatz, que reemplace el siguiente if-else

// if ( valor%2 == 0) {
//  valor = valor/2;
// } else {
//  valor = valor * 3 + 1;
// }

#include <stdlib.h>

int solucion(size_t valor){
    //tu código usando el operador ternario
    return !(valor % 2) ? valor/2 : valor*3 + 1;
}