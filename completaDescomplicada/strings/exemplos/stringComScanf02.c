/**
 * Quando usamos a função scanf() para ler uma string, 
 * o símbolo de & antes do nome da variável não é 
 * utilizado. Os colchetes [] também não são utilizados, 
 * pois queremos ler a string toda e não apenas uma 
 * letra. A função scanf() lê apenas strings digitadas 
 * sem espaços, ou seja, palavras.
 * Apenas os caracteres digitados antes do primeiro 
 * espaço encontrado serão armazenados na string.

 * Backes, André. Linguagem C - Completa e 
 * Descomplicada (Portuguese Edition) (p. 134). 
 * GEN LTC. Edição do Kindle. 
 */
#include <stdio.h>

int main()
{
   // string
   char str[20];

   printf("\nLendo STRING com SCANF");
   // entrada de dados
   printf("\nDigite seu nome completo: ");
   scanf("%s", str);

   // exibe resultado
   printf("\nVoce digitou: %s\n", str);

   printf("scanf(\"%%s\", str);");
   printf("\nA funcao scanf() le apenas strings digitadas" 
            "\nsem espacos, ou seja, palavras.");

   printf("\n\n");
   return 0;
} // end main