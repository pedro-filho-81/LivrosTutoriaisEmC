/* Exercício 5.20 Exibindo o quadrado de um caractere.
  Modifique a função criada no Exercício 5.19 para formar
  um quadrado a partir de qualquer caractere contido no
  parâmetro de caractere fillCharacter. Assim, se side é 5
  e fillCharacter é ‘#’, então essa função deverá imprimir:
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho, 18/05/2020*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
void quadrado(int quanti, int tipo);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variável
	int n = 0;
	int tipo = 0;

  printf("\nDESENHA Um QUADRADO DE CARACTERES \n\t1 = @\n\t2 = *\n\t3 = %%\n\t4 = &\n\t5 = #\n");

	// entrada de dados
	printf("Digite a quantidade de símbolos: ");
	scanf("%d", &n);
	printf("Digite o tipo desejado: ");
	scanf("%d", &tipo);

	//desenha um quadrado com asterisco
	quadrado(n, tipo); // n determina o tamanho do quadrado

	// Pausa o sistema
	// system("pause");

	 // fim do programa
	return 0;

} // fim main

//função desenha um quadrado
void quadrado(int quanti, int tipo) {

  // determina a coluna
  for(int j = 1; j <= quanti; j++) {
    // desenha a linha do quadrado
    for(int i = 1; i <= quanti; i++) {
      if(tipo == 1){
        printf(" @ "); // imprime arroba
      } // fim if
      else if(tipo == 2){
        printf(" * "); // imprime asterisco
      } // fim else if
      else if(tipo == 3){
        printf(" %% "); // imprime % comercial
      } // fim else if
      else if(tipo == 4){
        printf(" ! "); // imprime ponto de Esclamação
      } // fim else if
      else if(tipo == 5){
        printf(" # "); // imprime jogo da velha
      } // fim else if
      else {
        printf("Erro de tipo, tente novamente.\n");
        break;
      } // fim else
    } // fim for
    printf("\n"); // pula a linha
  } // fim for
} // fim função