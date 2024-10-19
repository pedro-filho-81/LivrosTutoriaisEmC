#include <stdio.h>
#include <locale.h>
/*Exercício 3.38, Cem Asterisco, Livro C como programar,
Pedro Filho, 02/05/2020 */
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	int contador = 1; // contador começa com 1

	// conte até 100
	while(contador <= 100){
    printf("* "); // imprima

    if(contador % 10 == 0){ //a cada 10
      printf("\n"); // pule uma linha
    } // fim if

    contador++; //some 1 ao contador

	} // fim while

} // fim main