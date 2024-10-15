/** 
 * Exercício 5.13 Escreva instruções que atribuam
 * inteiros aleatórios à variável n nos seguintes 
 * intervalos:Deitel, Paul; Deitel, Harvey. 
 * C  Como Programar (Página 153). 
 * Edição do Kindle.
 * Pedro Filho, 16/05/2020
 * */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <time.h> // para time(NULL)

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  //variáveis
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;

  srand( time(NULL) );

  printf("A%c", ')');
  // loop for repete 5 vezes
  for(int i = 1; i <= 10; i++) {
    a = 1 + rand() % 2; // número aleatório entre 1 e 2
    printf("%d ", a); // imprime o número
  } // fim for

  printf("\nB%c", ')');
  for(int a = 1; a <= 10; a++) {
    // b
    b = 1 + rand() % 100; // número aleatório entre 1 e 100
    printf("%d ", b); // imprime o número
  } // fim for
  printf("\n");

  printf("C%c", ')');
  // loop for repete 5 vezes
  for(int i = 1; i <= 10; i++) {
    //C
    c = 0 + rand() % 9; // número aleatório entre 1 e 2
    printf("%d ", c); // imprime o número
  } // fim for

  printf("\nD%c", ')');
  for(int a = 1; a <= 10; a++) {
    // D
    d = 1000 + rand() % 1112; // número aleatório entre 1 e 2
    printf("%d ", d); // imprime o número
  } // fim for
  printf("\n");

  printf("E%c", ')');
  // loop for repete 5 vezes
  for(int i = 1; i <= 10; i++) {
    //E
    e = -1 + rand() % 2; // número aleatório entre -1 e 1
    printf("%d ", e); // imprime o número
  } // fim for

  printf("\nF%c", ')');
  for(int a = 1; a <= 10; a++) {
    // F
    f = -3 + rand() % 11; // número aleatório entre -3 e 11
    printf("%d ", f); // imprime o número
  } // fim for
  printf("\n");

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main