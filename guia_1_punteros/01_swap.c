// Como habrás visto en las clases teóricas o de repaso de C, en este lenguaje no se puede devolver más de una cosa a la vez en el return. Es decir, los returns solamente pueden devolver un dato. Esto trae problemas si queremos modificar más de un elemento en nuestra función, porque no tenemos forma de devolver todos los cambios… o sí?

// Implementemos una función muy útil para empezar, la función swap. La misma recibe dos elementos y debe intercambiarlos. Es decir, el elemento que estaba en la primera variable ahora debe estar en la segunda, y viceversa.

// Por ahora, programemos una que intercambia dos ints. Ya nos meteremos con otro tipo de punteros (incluido el temido void*) más adelante.

// Recordemos que la variable primer_valor almacena la dirección de memoria de otra variable, mientras que *primer_valor o primer_valor[0] almacena el dato al que primer_valor apunta.

// Aclaro que el tipo de retorno void quiere decir que no se debe devolver nada al finalizar la ejecución. El retorno se señaliza solamente con un return;.

void swap(int* primer_valor, int* segundo_valor){
    //tu código
    int aux = *primer_valor;
    *primer_valor = *segundo_valor;
    *segundo_valor = aux;
    return;
}