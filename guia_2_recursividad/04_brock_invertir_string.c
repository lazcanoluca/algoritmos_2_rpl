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