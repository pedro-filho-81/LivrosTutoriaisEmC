/**
 * Figura 3.8: fig03_08.c
 * Programa de média da turma com repetição controlada 
 * por sentinela
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 57). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>

int main()
{
   // variáveis
   int contador = 1; // inicializa em 1
   int nota;
   int total = 0; // inicializa com 0
   
   float media;

      // entrada de dados
      printf("Digite a nota -1 para sair: ");
      scanf("%d", &nota);

   // processamento
   // enquanto nota diferente de -1 faça
   while (nota != -1)
   {
      // soma as notas
      total = total + nota;

      // incrementa o contador
      contador = contador + 1;

      // entrada de dados
      printf("Digite a nota -1 para sair: ");
      scanf("%d", &nota);
   } // end while

   // verificar se o contador está diferente de zero
   if (contador != 0)
   {
      // calcular a média
      media = (float) total / 10;

      printf("\nCALCULO DA mEDIA DAS NOTAS\n");
      
      // exibe a média
      printf("A media da turma eh: %.2f\n", media);   
   } else {
      
      printf("\nNenhuma nota foi cadastrada.\n");
   } // end else

   return 0;
} // end main