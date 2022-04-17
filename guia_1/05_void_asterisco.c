#include <string.h>

typedef struct entrenador {
    char* nombre;
    void* caracteristica;
} entrenador_t;

void* caracteristica_personal(entrenador_t* entrenador){
    //tu código
    return entrenador->caracteristica;
}