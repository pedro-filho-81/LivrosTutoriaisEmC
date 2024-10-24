/**
 * Procurando caractere em uma String
 * usando um loop
 */
#include <stdio.h>

int main()
{
   // cria variáveis
   char palavra[50] = {"abacate"};
   char letra;
   int i, contar;

   printf("Digite a letra que deseja pesquisar? ");
   scanf("%c", &letra);

   // header
   printf("%s%10s\n", "Indice", "Letras");

   // loop para exibir palavra
   i = 0;
   while (palavra[i] != '\0')
   {
      printf("%3d%10c\n", i, palavra[i]);
      i++; // incrementa i em 1
   } // end while

   // loop para pesquisar
   i = 0;
   while (palavra[i] != '\0')
   {
      // se a letra a pesquisar igual a letra da string
      if(letra == palavra[i]) // se verdade
      {
       //  printf("\nletra %c encontrada na posicao %d\n", palavra[i], i);
         contar++; // incrementa contar em 1
      } // end if
      i++; // incrementa i em 1
   } // end while

   // se contar maior que zero
   if(contar > 0)
      // exibir
      printf("\nForam encontrados %d letras %c\n\n", contar, letra);
   else // se não
      // exibir
      printf("\nLetra %c Nao encontrada\n\n", letra);   

} // end main