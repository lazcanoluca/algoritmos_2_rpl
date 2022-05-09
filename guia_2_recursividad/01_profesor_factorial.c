int calcular_combinaciones_posibles(int muestras_ADN)
{
    if (muestras_ADN > 1) return muestras_ADN * calcular_combinaciones_posibles(muestras_ADN - 1);
    return 1;
}