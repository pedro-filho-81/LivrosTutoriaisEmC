/**
 * usando as funções isdigit, isalpha, 
 * isalnum, isxdigit
 * Pedro, 09/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // para trabalhar com caracteres

int main()
{
   // função isdigit
   printf("%s\n%s%s\n\n%s%s\n\n",
            "De acordo com isdigir: ",
            isdigit('8') ? "8 eh um " : "8 nao eh um ", "digito",
            isdigit('#') ? "# eh um " : "# nao eh um ", "digito");


   return 0;
} // end main