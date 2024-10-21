/**
 * 1.2.6 Por que 10/3 dá 3 e não 3,333333333? Solução. 
 * Como 10 e 3 são literais inteiros, Java não vê 
 * necessidade de conversão de tipo e usa divisão inteira. 
 * Você deve escrever 10.0/3.0 se quiser que os números 
 * sejam literais duplos. Se você escrever 10/3.0 ou 10.0/3, 
 * Java faz conversão implícita para obter o mesmo resultado.
 * Sedgewick, Robert; Wayne, Kevin. Computer Science: An 
 * Interdisciplinary Approach . Pearson Education. 
 * Edição do Kindle.
 */
#include <stdio.h>
int main()
{
   // variáveis
   int a = 10;
   int b = 3;
   int divisao = 0;
   int resto = 0;

   // calcular
   divisao = a / b;
   resto = a % b;

   printf("\nLinguagens fortemente tipadas:");
   printf("\nDivisao de valores inteiros:");
   printf("\nint a = 10;\nint b = 3;");
   printf("\nResultado %d / %d = %d", a, b, divisao);
   printf("\nResto:    %d %% %d = %d\n", a, b, resto);
   
   double a2 = 10.00;
   double b2 = 3.00;
   double divisao2 = 0.;

   divisao2 = a2 / b2;
   
   printf("\nDivisao de valores Reais");
   printf("\ndouble a = 10.00;\ndouble b = 3.00;");
   printf("\nResultado %f / %f = %f\n", a2, b2, divisao2);

   printf("Tipos diferentes Resultados diferentes\n\n");

   return 0;
      
} // end main