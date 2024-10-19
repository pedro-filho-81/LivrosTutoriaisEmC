#include <stdio.h>
#include <locale.h>

/* Exercício 3.37 Qual a velocidade do seu computador,
Livro C como programar, Pedro Filho, 02/05/2020 */

int main() { // início main
	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	int contador = 1;
 
	while(contador <= 30000){
    printf("%d ", contador);
    if(contador == 1000){
      printf("\n1000\n");
    } // fim if
    contador++;
	} // fim while

} // fim main