void ajustar_fuerza(float* fuerza, float porcentaje){
    //tu código
    if (porcentaje>=0) *fuerza *= (porcentaje/100);
    return;
}