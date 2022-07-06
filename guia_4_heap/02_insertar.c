extern void sift_up(int* vector, int tope);

void heap_insertar(int* vector, int* tope, int elemento)
{
	(*tope)++;
	vector[*tope] = elemento;
	sift_up(vector, *tope);
}