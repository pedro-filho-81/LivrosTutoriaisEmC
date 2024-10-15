/* Exercício 5.18 Par ou ímpar. Escreva um programa
  que inclua uma série de inteiros e os passe um de
  cada vez à função even, que usa o operador de módulo
  para determinar se um inteiro é par.
  A função deverá usar um argumento inteiro e retornar 1
  se o inteiro for par, e retornar 0 se o inteiro for ímpar.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho, 18/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// protótipo de função
int parOuImpar(int n);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	printf("Número\tCódigo => 0 para ímpar - 1 para par\n");
  //loop 15 vezes
  for(int i = 1; i <= 15; i++) {
      if (parOuImpar(i) == 1)
      {
         printf("%2d\tpar", i);
      } else {
         printf("%2d\timpar", i);
      }
      printf("\n");
      // printf("%3d \t%3d\n", i, parOuImpar(i));
  } // end for

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função parOuImpar
int parOuImpar(int n) {

  // verificar se é par
  if(n % 2 == 0) {
    n = 1; // verdadeiro
  } // fim if
  else { // se não
    n = 0; // falso
  } // fim else

  return n;

} // fim parOuImpar