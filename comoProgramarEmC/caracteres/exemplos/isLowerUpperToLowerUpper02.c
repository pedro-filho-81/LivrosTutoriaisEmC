/**
 * Fig. 8.3: fig08_03.c  
 * Usando funções islower, isupper, tolower, toupper
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 261). Edição do Kindle. 
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
   // verifica se o caractere é letra minúscula
   printf("\n%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
          "De acordo com islower:",
          islower('p') ? "p eh uma " : "p nao eh uma ", "letra minuscula.",
          islower('P') ? "P eh uma " : "P nao eh uma ", "letra minuscula.",
          islower('5') ? "5 eh uma " : "5 nao eh uma ", "letra minuscula.",
          islower('!') ? "! eh uma " : "! nao eh uma ", "letra minuscula." );
   
   // verifica se o caractere é letra maiúscula       
   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
          "De acordo com isupper:",
          isupper('D') ? "D eh uma " : "D nao eh uma ", "letra maiuscula.",
          isupper('d') ? "d eh uma " : "d nao eh uma ", "letra maiuscula.",
          islower('8') ? "8 eh uma " : "8 nao eh uma ", "letra maiuscula.",
          islower('$') ? "$ eh uma " : "$ nao eh uma ", "letra maiuscula." );
      
      // converte o caractere para letra maiúscula e minúscula
      printf("Converte o caractere para:\nmaiuscula (toupper)\nminuscula (tolower).\n");
      printf("%s%c\n%s%c\n%s%c\n%s%c\n\n",
             "u convertido em maiuscula eh: ", toupper('u'),
             "7 convertido em maiuscula eh: ", toupper('7'),
             "$ convertido em maiuscula eh: ", toupper('$'),
             "L convertido em minuscula eh: ", tolower('L'));

   return 0;

} // end main