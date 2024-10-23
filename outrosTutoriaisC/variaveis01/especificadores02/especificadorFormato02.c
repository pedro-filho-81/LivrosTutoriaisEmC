/**
 * Especificadores de formato são usados juntos 
 * com a função printf() por exemplo, para exebir
 * o valor de uma variável inteira usa-se o especificador
 * (%d) entre aspas duplas ("%d") dentro da função
 * printf("%d"); (;) encerra a instrução
 */
#include <stdio.h>

int main()
{
   // variável
   int a = 25;

   // exibe o valor da variável a
   printf("\n\nint a = 25;");
   printf("\nO valor da variavel a eh: %d\n\n", a);

   // retorna zero
   return 0;

} // end main