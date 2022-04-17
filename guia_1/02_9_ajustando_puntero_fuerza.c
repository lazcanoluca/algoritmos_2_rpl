typedef struct pokemon {
    float* fuerza;
    char* nombre;
} pokemon_t;

void actualizar_fuerza(pokemon_t* pokemon, float* nueva_fuerza){
    //tu código
    if (*nueva_fuerza>=0) pokemon->fuerza = nueva_fuerza;
}