/* Exercício 5.17 Múltiplos. Escreva uma função multiple
  que determine para um par de inteiros, se o segundo
  inteiro é um múltiplo do primeiro. A função deve apanhar
  dois argumentos inteiros e retornar 1 (verdadeiro),
  se o segundo for um múltiplo do primeiro, e 0 (falso),
  caso contrário. Use essa função em um programa que inclua
  uma série de pares de inteiros.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho, 17/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
int multiplo(int n1, int n2);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variáveis
  int num1 = 0;
  int num2 = 0;

  //entrada de dados
  printf("Digite um número: ");
  scanf("%d", &num1);
  printf("Digite num2: ");
  scanf("%d", &num2);

  //mostra dados
  if(multiplo(num1, num2) == 1) {
    printf("O Número %d é multiplo de %d\n", num2, num1);
  } // fim if
  else {
    printf("O Número %d não é multiplo de %d\n", num2, num1);
  } // fim else

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

//função multiplo
int multiplo(int n1, int n2) {

  //calcular o resto da divisão
  int multi = n2 % n1;

  //verificar se o resto da divisão é iguala zero
  if(multi == 0) {
    multi = 1; // se sim, multi recebe o valor 1, verdadeiro
  } // fim if
  else { // se não
    multi = 0; //multi recebe o valor zero falso
  } // fim else

  return multi; // retorna o valor de multi

} //fim função multiplicar