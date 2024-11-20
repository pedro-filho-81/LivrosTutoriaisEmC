/**
 * 6.3 Considere um array chamado fractions.  
 * a) Defina uma constante simbólica SIZE que possa  
 * ser substituída pelo texto substituto 10.  
 * b) Defina um array com elementos SIZE do tipo double 
 * e inicialize-os em 0.  
 * c) Referencie o quarto elemento a partir do início 
 * do  array.  
 * d) Referencie o elemento 4 do array.  
 * e) Atribua o valor 1,667 ao elemento 9 do array.  
 * f) Atribua o valor 3,333 ao sétimo elemento do 
 * array.  
 * g) Imprima os elementos 6 e 9 do array com dois 
 * dígitos de precisão à direita do ponto decimal e 
 * mostre  a saída que aparece na tela.  
 * h) Imprima todos os elementos do array, 
 * usando uma  estrutura de repetição for. Suponha que 
 * a variável  inteira x tenha sido definida como uma 
 * variável de  controle para o loop. Mostre a saída. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 197). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{ 
   double fraction[ SIZE ] = {0.0}; // array do tipo int
   // double array[ SIZE ] = { 0.0 }; // ARRAY DO TIPO DOUBLO INICIALIZADO COM ZERO

   // array posição 4 recebe zero
   fraction[3] = 8.0;

   // array posiçaõ 9 recebe valor
   fraction[8] = 1.667;
   // array posição 7 recebe valor
   fraction[6] = 3.333;

   // exibir
   printf("\nfractuin[6] = %.2f\nfraction[8] = %.2f\n", fraction[6], fraction[8]);

   // exibe todos os elementos de fraction
   for (int x = 0; x < SIZE; x++)
      printf("%2d => %.2f\n", x, fraction[x]);

   printf("\n\n");
   return 0;

} // end main