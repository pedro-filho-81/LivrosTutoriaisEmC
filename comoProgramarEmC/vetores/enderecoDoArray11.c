#include <stdio.h>

int main(void) {

// define um array com tamanho 5
char array[5];

/*
   %p => mostra o endereço da "variável"
   &variável => mostra o endereço da 
   (variável, array, etc).
*/
printf("\narray = [%p]\n&array[0] = %p\n&array = %p\n\n", array, &array[0], &array);

return 0;

} // end main