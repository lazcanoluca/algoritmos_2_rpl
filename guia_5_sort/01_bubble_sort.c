#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_VECTOR 50

// void swap(char *a, char *b)
// {
// 	printf("a: %c, b: %c\n", *a, *b);
// 	char *aux = a;
// 	a = b;
// 	b = aux;
// 	printf("a: %c, b: %c\n", *a, *b);
// }

void bubble_sort(char vector_desordenado[MAX_VECTOR],
    char vector_ordenado[MAX_VECTOR],
    int tope,
    bool ascendente)
{
    strcpy(vector_ordenado, vector_desordenado);

    for (int k = tope-1; k > 0; k--) {

        for (int i = 0; i < k; i++) {

        //     if (ascendente) {
                if (vector_ordenado[i] > vector_ordenado[i+1] ) {
			printf("[i]: %c, [i+1]: %c\n", vector_ordenado[i], vector_ordenado[i+1]);
                    char aux = vector_ordenado[i];
                    vector_ordenado[i] = vector_ordenado[i+1];
                    vector_ordenado[i+1] = aux;
		    printf("[i]: %c, [i+1]: %c\n", vector_ordenado[i], vector_ordenado[i+1]);
                }
        //     }
	//     else {
        //         if (vector_ordenado[i] < vector_ordenado[i+1] ) {
        //             char aux = vector_ordenado[i];
        //             vector_ordenado[i] = vector_ordenado[i+1];
        //             vector_desordenado[i+1] = aux;
        //         }
        //     }

        }

        // while (i < tope-k) {

        //     a = vector_ordenado[i];
        //     b = vector_ordenado[i+1];

        //     if (ascendente) {
        //         (a > b) && swap(&a, &b);
        //     } else {
        //         (a < b) && swap(&a, &b);
        //     }
        //     // if (vector_ordenado[i] > vector_ordenado[i+1]) {
        //     //     aux = vector_ordenado[i+1];
        //     //     vector_ordenado[i+1] = vector_ordenado[i];
        //     //     vector_ordenado[i] = aux;
        //     // }
        //     i++;
        // }
    }
}

// void bubble_sort(
// 	char vector_desordenado[MAX_VECTOR],
// 	char vector_ordenado[MAX_VECTOR],
// 	int tope,
// 	bool ascendente)
// {
// 	// vector_ordenado = vector_desordenado;
// 	// while ((*vector_ordenado)++ = (*vector_desordenado)++);
// 	strcpy(vector_ordenado, vector_desordenado);
// 	// printf("%s\n", vector_desordenado);
// 	// printf("%s\n", vector_ordenado);

// 	// int i = 0, k = 0;
// 	// char a, b;

// 	// while(k++ <= tope) {

// 	// 	i = 0;

// 	// 	while (i < tope-k) {

// 	// 		a = vector_ordenado[i];
// 	// 		b = vector_ordenado[i+1];
// 	// 		printf("%i, %c, %c\n", i, a, b);

// 	// 		if (ascendente) {
// 	// 			printf("Entran a: %c, b: %c\n", a, b);
// 	// 			if (a > b) swap(&a, &b);
// 	// 			printf("Salen a: %c, b: %c\n", a = vector_ordenado[i], vector_ordenado[i+1]);
// 	// 		} else {
// 	// 			if (a < b) swap(&a, &b);
// 	// 		}
// 	// 		i++;
// 	// 	}	
// 	// }

// 	char aux;

// 	for (int k = 0; k < tope; k++) {
// 		for (int i = 0; i < tope-k-1; i++) {
// 			if (vector_ordenado[i] > vector_ordenado[i+1]) {
// 				aux = vector_ordenado[i+1];
// 				vector_desordenado[i+1] = vector_ordenado[i];
// 				vector_ordenado[i] = aux;
// 			}
// 		}
// 	}
// }

int main(int argc, char const *argv[])
{
	char desordenado[MAX_VECTOR];
	char ordenado[MAX_VECTOR];

	strcpy(desordenado, "CEFADB");

	printf("%s\n", desordenado);
	bubble_sort(desordenado, ordenado, 6, true);
	printf("%s\n", ordenado);

	return 0;
}
