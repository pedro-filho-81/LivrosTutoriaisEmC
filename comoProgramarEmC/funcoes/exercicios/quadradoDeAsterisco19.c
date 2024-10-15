/* Exercício 5.19 Exibindo um quadrado de asteriscos.
  Escreva uma função que apresente um quadrado sólido
  de asteriscos cujo lado é especificado no parâmetro
  inteiro side. Por exemplo, se side é 4, a função exibe:
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho,c18/05/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
void quadrado(int num);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variável
	int n = 0;

   printf("\nDESENHO QUADRADO DE ASTERISCO\n");
	// entrada de dados
	printf("Digite o tamanho do asterisco: ");
	scanf("%d", &n);

	//desenha um quadrado com asterisco
	quadrado(n); // n determina o tamanho do quadrado

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

//função desenha um quadrado
void quadrado(int num) {
  // determina a coluna
  for(int j = 1; j <= num; j++) {
    // desenha a linha do quadrado
    for(int i = 1; i <= num; i++) {
      printf(" * "); // imprime o asterisco
    } // fim for
    printf("\n"); // pula a linha
  } // fim for
} // fim função