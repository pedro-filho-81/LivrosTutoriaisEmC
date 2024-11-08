/**
 * Figura 3.10: fig03_10.c
 * Análise de resultados de exame
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 63). Edição do Kindle. 
 * 08/10/2024
 */
#include <stdio.h>

int main()
{
   // variáveis
   int aprovado = 0;
   int reprovados = 0;
   int aluno = 1;
   int resultado = 0;

   // processa 10 alunos usando loop controlado pelo contador
   while (aluno <= 10)
   {
      // entrada de dados
      printf("Forneça o resultado (1 = aprovado 2 = reprovado): ");
      scanf("%d", &resultado);

      // se resultado igual a 1
      if (resultado == 1)
      {
         // incrementa aprovados
         aprovado = aprovado + 1;
      } else {
         // incrementa reprovados
         reprovados = reprovados + 1;
      } // end else
      
      aluno = aluno + 1;
   } // end while

   // exibe resultado
   printf("\nAprivados: %d\n", aprovado);
   printf("Reprovados: %d\n", reprovados);

   if (aprovado > 8)
   {
      printf("Bônus ao instrutor.\n\n");
   } // end if   
   
   return 0;

} // end main