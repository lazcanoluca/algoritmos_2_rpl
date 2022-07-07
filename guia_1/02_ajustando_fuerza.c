// Revisemos un poco más la aritmética de punteros. Sabemos que

// char letra = 'A';
// char* puntero_letra = &letra;
// acabamos de declarar la variable letra que es un char (entero de un byte), y la variable puntero_letra que es un puntero a letra. Lo poderoso de los punteros es que podemos acceder al valor de letra tanto desde letra como desde puntero_letra indistintamente.

// Cómo se modifica el valor de letra teniendo puntero_letra? Muy fácil. La siguiente instrucción cambia el valor de letra de 'A' a 'B' *puntero_letra = 'B';.

// Sabiendo todo esto, resolvamos este ejercicio. Resulta que hay ciertos pokemones que son demasiado fuertes para su propio bien. Se requiere una función que dada la fuerza y el porcentaje a mantener de esa fuerza, se modifique el puntero de fuerza correctamente.

// Por ejemplo, si la fuerza vale 100 y el porcentaje es 75, el nuevo valor de la fuerza debe ser 75.

// Eso sí, como no puedo calcular la fuerza con un porcentaje negativo, en caso de que nos envíen uno, no se debe modificar la fuerza. Es decir, si la fuerza original es 190 y se pasa el porcentaje -10, la fuerza final sigue siendo 190.

void ajustar_fuerza(float* fuerza, float porcentaje){
    //tu código
    if (porcentaje>=0) *fuerza *= (porcentaje/100);
    return;
}