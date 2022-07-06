#include "abb.c"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int comparador(void* _i1, void* _i2){
	int* i1=_i1;
	int* i2=_i2;
	return *i1-*i2;
}

bool es_impar(int x)
{
	printf("evalúo el: %i\n", x);
	return x % 2 == 0 ? false : true;
}

bool agregar(void *num, void *arbol)
{
	if (es_impar( (int)*(int *)num )) {
		printf("es impar\n");
		abb_insertar((abb_t *)arbol, (int *)num);
	}

	return true;
}

void elementos_impares(abb_t* abb_original, abb_t* abb_impares)
{
	if (!abb_original || !abb_impares)
		return;

	abb_con_cada_elemento(abb_original, INORDEN, agregar, abb_impares);
}

bool mostrar(void *numero, void *xd)
{
	printf("%i\n", *(int *)numero);
        return true;
}

int main(int argc, char const *argv[])
{
	abb_t *abb = abb_crear(comparador);

	int a = 7, b = 10, c = 13, d = 14, e = 15, f = 17, g = 19, h = 23, i = 29;

	abb_insertar(abb, &e);
	abb_insertar(abb, &c);
	abb_insertar(abb, &h);
	abb_insertar(abb, &b);
	abb_insertar(abb, &a);
	abb_insertar(abb, &d);
	abb_insertar(abb, &g);
	abb_insertar(abb, &i);
	abb_insertar(abb, &f);

	abb_t *abb_impares = abb_crear(comparador);

	elementos_impares(abb, abb_impares);

	abb_con_cada_elemento(abb, INORDEN, mostrar, NULL); 
	abb_con_cada_elemento(abb_impares, INORDEN, mostrar, NULL);

	return 0;
}