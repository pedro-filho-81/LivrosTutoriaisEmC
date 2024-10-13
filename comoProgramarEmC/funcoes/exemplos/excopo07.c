/**
 * Fig. 5.12: fig05_12.cC  
 * 2 Um exemplo de escopo
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 136). Edição do Kindle. 
 * 13/10/2024
 */
#include <stdio.h>
#include <stdlib.h>

// prototipos
int useLocal(void);
int useStaticLocal(void);
int useGlobal(void);

// variável global
int x = 1;

int main()
{
   // variável local em main
   int x = 5;

   // começalho
   printf("\nREGRAS DE ESCOPO Em C\n");
   printf("x local no escopo main eh: %d\n", x);

   { // inicia novo escopo
      int x = 7;

      printf("x no novo escopo dentro de main Eh: %d\n", x);
   } // end novo escopo

   printf("x apos o novo escopo dentro de main eh: %d\n\n", x);

   // chama as funções
   useLocal();
   useStaticLocal();
   useGlobal();

   useLocal();
   useStaticLocal();
   useGlobal();

   printf("x local em main eh: %d\n\n", x);

   return 0;
} // end main

int useLocal()
{
   // variavel
   int x = 25;

   printf("x ao entrar na funcao useLocal eh: %d\n", x);

   x++;

   printf("x pos incremento ao sair da function useLocal eh: %d\n\n", x);

} // end useLocal

int useStaticLocal()
{

   // variavel
   static int x = 50;

   printf("x ao entrar na funcao useStaticLocal eh: %d\n", x);

   x++;

   printf("x pos incremento ao sair da function useStaticLocal eh: %d\n\n", x);
} // end useStaticLOcal

int useGlobal()
{
   printf("x global eh %d na entrada de useGlobal\n", x);

   x *= 10; // modifica o valor de x

   printf("x global eh %d na saida de useGlobal \n\n", x);
} // end useGlobal