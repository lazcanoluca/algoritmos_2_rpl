// Finalmente llegamos a la temida función heap_borrar, o heap_extraer_raiz en este caso. Se debe quitar el elemento raíz del heap, que por propiedad de heap maximal, será el mayor elemento del heap. Sin más preámbulo, implementémosla.

extern void sift_down(int* vector, int tope, int pos_actual);

int heap_extraer_raiz(int* vector, int* tope)
{
    if (!vector || !tope || (*tope) == 0)
        return 0;

    int retorno = vector[0];

    vector[0] = vector[(*tope)];
    (*tope)--;

    sift_down(vector, tope, 0);

    return retorno;
}