/**
 * Figura 3.6: fig03_06.c  2 Programa de média da turma 
 * com repetição controlada por contador
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 54). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>

int main()
{
   // variáveis
   int contador = 1; // inicializa em 1
   int nota;
   int total = 0; // inicializa com 0
   int media;

   // processamento
   // enquanto contador menor ou igual a 10 faça
   while (contador <= 10)
   {
      // entrada de dados
      printf("Digite a nota: ");
      scanf("%d", &nota);

      // soma as notas
      total = total + nota;

      // incrementa o contador
      contador = contador + 1;
   } // end while

   // calcular a média
   media = total / 10;

   printf("\nCALCULO DA mEDIA DAS NOTAS\n");
   
   // exibe a média
   printf("A media da turma eh: %d\n", media);
   
   return 0;
} // end main