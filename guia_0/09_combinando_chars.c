#include <string.h>
#define MAX_STRING 10

char ejercicio(
    char string1[MAX_STRING],
    char string2[MAX_STRING],
    char string3[MAX_STRING]) {
    //tu código
    return strcmp(strcat(string1, string2), string3) <= 0 ? 'C' : 'S';
}