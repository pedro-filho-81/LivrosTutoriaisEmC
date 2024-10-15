/* Exercício 5.14 Para cada um dos conjuntos de
inteiros a seguir, escreva uma única instrução
que imprima um número aleatoriamente a partir do conjunto.
Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 153).
Edição do Kindle. Pedro Filho, 15/2020 */

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

  // induz variação de rand
  srand( time(NULL) );

  printf("A%c", ')'); // letra A
  // loop 10 vezes
  for(int i = 1; i <= 10; i++) {

    // gera randômico entre 2 e 10
    a =  2 + rand() % 10;

    // se a for par
    if(a % 2 == 0) {

    // imprima
    printf("%d ", a);

    } // fim if

  } // fim for a
  printf("\n"); // pule uma linha

  printf("B%c", ')'); // letra B
  // loop 10 vezes
  for(int i = 1; i <= 10; i++) {

    // gera randômico entre 3 e 11
    b =  3 + rand() % 11;

    // se b for impar
    if(b % 2 == 1) {

    // imprima b
    printf("%d ", b);

    } // fim if

  } // fim for b
  printf("\n"); // pule uma linha

  printf("C%c\n", ')'); // letra C
  // loop 10 vezes
  for(int i = 1; i <= 30; i++) {

    // randômico entre 6 e 22
    c =  6 + rand() % 22;

    //conte de 6 a 22 de 4 em 4
    for(int i = 6; i <= 22; i += 4) {

      // se c igual a i
      if(c == i){

        // imprima i e c
        printf("i = %2d, c = %2d\n", i, c);

      } // fim if
    } // fim for
  } // fim for

  printf("\n"); // pule uma linha

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main