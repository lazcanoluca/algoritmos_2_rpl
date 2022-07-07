// En esta guía, buscamos programar las funciones más importantes del heap. Para eso, iremos paso por paso programando lo que necesitamos y asegurándonos de que funciona, antes de pasar a la siguiente parte. En la página de la materia hay un apunte donde se explica la lógica de cada una de las funciones que implementaremos.

// Uno de los primeros métodos que se elige programar de un tda es el insertar. Para implementar la versión de esta función en el heap, es conveniente empezar con esta función, sift_up. Se recibe el vector de enteros y la posicion a partir de la cual se debe hacer sift_up.

// No te confundas, no estás programando heap_insertar todavía. Esa función es la del siguiente ejercicio, ahora estás programando sift_up, que será muy útil para heap insertar.

// Aclaración: en todos los ejercicios, supondremos que se tiene un heap maximal.

void sift_up(int *vector, int pos_actual)
{
	if (!vector)
		return;

	int pos_hijo = pos_actual;
	int pos_padre = (pos_hijo % 2 == 0) ? (pos_hijo-2) / 2 : (pos_hijo-1) / 2;
	int aux;

	while (pos_hijo > 0 && vector[pos_hijo] > vector[pos_padre]) {
		aux = vector[pos_padre]; 
		vector[pos_padre] = vector[pos_hijo];
		vector[pos_hijo] = aux;

		pos_hijo = pos_padre;
		pos_padre = (pos_hijo % 2 == 0) ? (pos_hijo-2) / 2 : (pos_hijo-1) / 2;
	}
}