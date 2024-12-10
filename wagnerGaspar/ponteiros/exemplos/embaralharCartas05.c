/**
 * Fig. 7.24: fig07_24.c
 * Programa de embaralhamento e distribuição de cartas
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 235). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// protótipos
void embaralhar(int wbaralho[][13]);
void distribuir(const int wbaralho[][13], const char *wNaipe1[], const char *wNaipe2[]);

int main()
{
   // cria um array de ponteiro
   const char *naipe1[4] = 
      {"Copas", "Ouro", "Paus", "Espadas"};

   const char *naipe2[13] = 
      {"As", "Dois", "Tres", "Quatro",
         "cinco", "Seis", "Sete", "Oito",
         "Nove", "Dez", "Valete", "Dama", "Rei"};

   // inicializa array baralho
   int baralho[4][13] = {0};

   // semente de rand()
   srand(time(NULL));

   // chama procedimento
   embaralhar(baralho);
   // distribuir as cartas do baralho
   distribuir(baralho, naipe1, naipe2);

   printf("\n\n");
   return 0;

} // end main

// embaralhar
void embaralhar( int wbaralho[][13])
{
   int linha = 0;
   int coluna = 0;
   int carta = 0;

   // loop for para cada uma das 52 cartas, escolha
   // slot de cartas aleatoriamente
   for(carta = 1; carta <= 52; carta++)
   {
      /*
         escolha novo local aleatório até que slot não
         ocupado seja encontrado
      */
     do
     {
         linha = rand() % 4;
         coluna = rand() % 13;
     } while (wbaralho[linha][coluna] != 0);
     
     // coloca o número da carta no slot escolhido do baralho
     wbaralho[linha][coluna] = carta;
   } // end for carta
} // end embaralhar

// distribuir cartas
void distribuir(const int wbaralho[][13], const char *wNaipe1[], const char *wNaipe2[])
{
   // variáveis
   int carta;
   int linha;
   int coluna;

   // loop para distribuir cada carta
   for(carta = 1; carta <= 52; carta++)
   {
      for ( linha = 0; linha <= 3; linha++)
      {
         for ( coluna = 0; coluna < 13; coluna++)
         {
            // se slot contém cartão atual, mostrar carta
            if(wbaralho[linha][coluna] == carta)
            {
               printf("%5s de %-8s%c", wNaipe2[coluna], wNaipe1[linha], carta % 2 == 0 ? '\n' : '\t');
            } // end if
         } // end for coluna         
      } // end for linha      
   } // end for carta
} // end distribuir