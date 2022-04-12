#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numero_mas_grande(FILE *archivo){

    char string[1000];
    fscanf(archivo, "%s", string);
    char *token = strtok(string, ";");
    int mayor = atoi(token);

    while (token != NULL) {
        if (atoi(token) > mayor) mayor = atoi(token);
        token = strtok(NULL, ";");
    }

    return mayor;
}

int main(int argc, char const *argv[])
{
    FILE *archivo = fopen("numeros.txt", "r");
    //printf("a");
    //numero_mas_grande();
    printf("%i", numero_mas_grande(archivo));
    fclose(archivo);
    return 0;
}
