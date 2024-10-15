/* Exercício 5.16 Exponenciação Escreva uma função
  potenciaInt(base, expoente) que retorne o valor de
  base expoente Por exemplo, potenciaInt( 3, 4) = 3 * 3 * 3 * 3.
  Suponha que expoente seja um inteiro positivo,
  diferente de zero, e base seja um inteiro.
  A função potenciaInt deve usar for para controlar o cálculo.
  Não use funções da biblioteca matemática.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho, 17/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
int potenciaInt(int base, int expoente);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  //variáveis
  int ba = 0; // base
  int exp = 0; // expoente

  // entrada de dados
  printf("Intorme o valor base: ");
  scanf("%d", &ba);
  printf("Informe o expoente: ");
  scanf("%d", &exp);

  // imprime o resultado
  printf("O %d elevado a %d é igual a %d\n", ba, exp, potenciaInt(ba, exp));

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main

//função potenciaInt
int potenciaInt(int base, int expoente) {

  // variável
  int potencia = 1;

  // repete x vezes o valor do expoente
  for(int i = 1; i <= expoente; i++) {
    //cacular a potência
    potencia *= base;
  } // fim for

  // retorna o resultado
  return potencia;
 
} // fim function potenciaInt