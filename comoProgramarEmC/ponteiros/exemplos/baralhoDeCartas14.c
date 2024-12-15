/**
 * Fig. 7.24: fig07_24.c
 * Programa de embaralhamento e distribuição de cartas
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 235). Edição do Kindle. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4 // suit
#define COLUmN 13 // naipe

// protótiipos
void embaralhar(int wBaralho[][COLUmN]);
void distribuir(const int wBaralho[][COLUmN], const char *suit[], const char *naipe[]);

int main()
{  
   // inicializa array suit
   const char *suit[ROW] = {"Copas", "Ouro", "Paus", "Espadas"};

   const char *naipe[COLUmN] = 
   {"As", "Dois", "Tres", "Quatro",
      "Cinco", "Seis", "Sete", "Oito",
      "Nove", "Dez", "Valete", "Dama", "Rei"};
   
   // inicializa baralho
   int baralho[ROW][COLUmN] = {0};

   // semente para rand
   srand(time(NULL));

   // chama embaralhar
   embaralhar(baralho);

   // chama distribuir
   distribuir(baralho, suit, naipe);

} // end main

// procedimentos
void embaralhar( int wBaralho[][COLUmN] )
{
   // variáveis
   int linha; // número de linhas
   int coluna; // número de colunas
   int carta; // contador

   // loop for para cada uma das 52 cartas, escolhe
   // slot de desk aleatoriamente
   for ( carta = 1; carta <= 52; carta++)
   {
      /**
       * escolha novo local aleatória até que o slot
       * não ocupado seja encontrado
       */
      do {
         linha = rand() % ROW;
         coluna = rand() % COLUmN;
      } while (wBaralho[linha][coluna] != 0);

      /**
       * coloca número de carta no slot escolhido do baralho
       */
      wBaralho[linha][coluna] = carta;
   } // end for   
} // end embaralhar

void distribuir(const int wBaralho[][COLUmN], const char *suit[], const char *naipe[] )
{
   // variveis
   int linha;
   int coluna;
   int carta;

   // loop for para distribuir as cartas do baralho
   for ( carta = 1; carta < 52; carta++)
   {
      // loop for para linhas
      for ( linha = 0; linha < ROW; linha++)
      {
         for (coluna = 0; coluna < COLUmN; coluna++)
         {
            if(wBaralho[linha][coluna] == carta)
            {
               printf("%5s de %-8s%c", naipe[coluna], suit[linha], carta % 2 == 0 ? '\n' : '\t');
            } // end if
         } // end for coluna         
      } // end for linha      
   } // end for carta   
} // end distribuie