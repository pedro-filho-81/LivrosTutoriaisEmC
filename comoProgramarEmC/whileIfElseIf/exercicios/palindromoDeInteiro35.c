#include <stdio.h>
#include <locale.h>
/*Exercício 3.35, Testador de Palíndromo.
   Livro C como programar; Pedro Filho, 30/04/2020
*/

int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	//variável
	int num = 0;
  int um = 0;
  int dois = 0;
  int tres = 0;
  int quatro = 0;
  int cinco = 0;

  //Entrada de dados
  printf("Digite um inteiro com 5 digitos: ");
  scanf("%d", &num);

  //individualizando o número digitado
  um = num / 10000;
  dois = num % 10000 / 1000;
  tres = num % 1000 / 100;
  quatro = num % 100 / 10;
  cinco = num % 10;

  //mostra dados
  printf("Números digitados: %d\n", num);
  printf("Números invertidos: %d%d%d%d%d", cinco, quatro, tres, dois, um);
  printf("\n************************\n");

  //vericicar se o número invertido é igual ao digitado
  //Se for mostra
  if(cinco == um && quatro == dois) {
    printf("\nO número %d é um Palíndromo.\n", num);
  }
  else { // se não for mostra
    printf("\nO número %d não é um Palíndromo.\n", num);
  }

} // fim main