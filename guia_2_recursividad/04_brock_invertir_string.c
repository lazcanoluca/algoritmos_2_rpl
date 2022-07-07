// Brock es muy conocido en Ciudad Plateada y sus alrededores por ser muy enamoradizo. Pero un día, luego de conocer a Olivia, decide enviarle un poema de amor. Pero como desea que ella sea la única que lo lea, pues no confía en los carteros. Entonces decide escribirlo con todas las palabras al revés.

// Ejemplo: HOLA lo escribe ALOH.

// Ayuda a la joven Olivia, creando un programa que recibe palabras y las devuelve en el orden correcto. Apresúrate, Olivia está ansiosa por leer el poema de Brock.

#include "solucion.h"
#include <stdio.h>
#include <string.h>

void invertir(char *text, size_t inicio, size_t final)
{
   char ch;
   if (inicio >= final) return;
 
   ch = *(text+inicio);
   *(text+inicio) = *(text+final);
   *(text+final) = ch;
   invertir(text, ++inicio, --final);
}

void invertidor_de_poema(char* poema){
    invertir(poema, 0, strlen(poema)-1);
}