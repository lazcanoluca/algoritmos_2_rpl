typedef struct entrenador {
    char* nombre;
    int cant_vencidos;
} entrenador_t;

void actualizar_victorias(void* entrenador, void* cant_extra){
    //tu código
    if (!entrenador || !cant_extra || *(int *)cant_extra <= 0) return;
    ((entrenador_t *)entrenador)->cant_vencidos += *(int *)cant_extra;
}