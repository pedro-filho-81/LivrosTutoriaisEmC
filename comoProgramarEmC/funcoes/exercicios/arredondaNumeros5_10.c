/**
 * Exercício 5.10 Arredondando números.
 * Deitel, Paul; Deitel, Harvey. C  Como
 * Programar (Página 153). Edição do Kindle.
 * Pedro Filho, 12/10/2024
 * */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <math.h>

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  //variáveis
  int x = 0;
  int y = 0;
  int contador = 1;

   printf("\nArredondando Numeros:\n"); 
  
  //faça enquanto verdade
  while(contador <= 5 ) {

    //Entrada de dados
    printf("Informe um valor para x: ");
    scanf("%d", &x);

    // atribuição y recebe o retorno da função floor()
    y = floor(x + 0.5);

    //imprima
    printf("X vale %d e y vale %d\n", x, y);

    contador++;

  } // fim while

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main