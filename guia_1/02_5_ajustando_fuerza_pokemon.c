typedef struct pokemon {
    float fuerza;
    char* nombre;
} pokemon_t;

void ajustar_fuerza(pokemon_t* pokemon, float porcentaje){
    //tu código
    if (porcentaje>=0) pokemon->fuerza *= (porcentaje/100);
}