// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 12

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela
   
   // variáveis
   int i;
   int soma = 0;
   
   // vetor
   int vetor[SIZE] = {1, 2, 3, 5, 15, 20, 50, 90, 84, 75, 6, 32};
   
   printf("%s%10s\n", "Índice", "Valores");
   
   // loop para somar e exibir valores
   for(i = 0; i < SIZE; i++) {
      printf( "%3d%10d\n", i, vetor[i]); // imprime na tela e pula uma linha
      soma += vetor[i];
   } // end for
   
   printf("Soma =  %d\n", soma);
   
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
