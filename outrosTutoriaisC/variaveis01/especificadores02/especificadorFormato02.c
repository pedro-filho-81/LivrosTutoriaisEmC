/**
 * declara e cria um variável
 * int variavel = 25;
 * Especificadores de formato são usados juntos 
 * com a função printf() por exemplo, para exibir
 * o valor de uma variável inteira na tela 
 * usa-se o especificador (%d) 
 * entre aspas duplas ("%d") 
 * dentro da função printf("%d", variável); 
 * essa função exibi o valor 25 na tela
 * o ponto e vírgula (;) encerra a instrução.
 */
#include <stdio.h>

int main()
{
   // variável declara e cria
   int a = 25;

   // exibe o valor da variável a
   printf("\n\nint a = 25;");
   printf("\nO valor da variavel a eh: %d\n\n", a);

   // retorna zero
   return 0;

} // end main