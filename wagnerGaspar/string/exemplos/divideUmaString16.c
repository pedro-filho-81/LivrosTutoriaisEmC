/**
 * Como dividir uma string em tokens com
 * a função strtok() em C
 * 
 * A função strtok() divide uma string em vários pedaços 
 * (chamados de "tokens") usando delimitadores.
 * 
 * A primeira chamada para strtok() deve ter um ponteiro 
 * para a string que deve ser dividida, enquanto 
 * quaisquer chamadas seguintes devem usar NULL como 
 * argumento. 
 * Esteja ciente de que esta função modifica a string 
 * original, substituindo delimitadores por caracteres de 
 * terminação nulos para que cada token possa ter seu 
 * próprio caractere de terminação nulo.
 */
#include <stdio.h>
#include <string.h>

int main()
{
   // cria string
   char palavra[50] = {"Bom!dia.simpatia Bom dia"};
   char *ptr;
   char palavra2[50] = {"Boa tarde!Estava la; em casa estudando C."};
   char *ptr2;

   printf("palavra1 original: %s\n", palavra);
   printf("palabra2 original: %s\n", palavra2);

   // Função strtok(nome da string, 
   // "caracteres a ser retirados")) 
   // retira da string palavra
   // alguns caracteres tais como a esclamção (!), 
   // o ponto(.) e o espaço em branco
   ptr = strtok(palavra, "!. ");

   // enquanto tiver caracteres na string faça
   while (ptr)
   {
      // imprime a string sem o que foi retirado
      // pela função 
      printf("Token: %s\n", ptr);

      // retira da string o que está entre 
      // as aspas duplas; esse ptr é o
      // contador do while
      // enquanto tiver "!.' '" conte
      ptr = strtok(NUlL, "!. ");

   } // end while

   ptr2 = strtok(palavra2, "!,; ");

   while (ptr2)
   {
      printf("token2: %s\n", ptr2);

      ptr2 = strtok(NULL, "!.; ");
   }
   
   return 0;

} // end main