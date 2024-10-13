/**
 * /* Fig. 5.10: fig05_10.c  
 * 2 Craps
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 130). Edição do Kindle. 
 * 13/10/2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constante de enumeração representam status do jogo
enum status{CONTINUE, WON, LOST};

// protótipo
int rollDice();

int main()
{
   int sum = 0; // soma dos lados
   int myPoints; // pontos do jogo

   enum status gameStatus;

   // semente geradora para rand
   srand(time(NULL));

   sum = rollDice(); // sum recebe valor retornado da função

   // determina o status do jogo
   switch (sum)
   {
      case 7:
      case 11:
         gameStatus = WON;
         break;

      case 2:
      case 3:
      case 12:
         gameStatus = LOST;
         break;

      default:
         gameStatus = CONTINUE;
         myPoints = sum;
         printf("Ponto eh: %d\n", myPoints);
         break;
   } // end switch

   // enquanto o jogo não terminar
   while (gameStatus == CONTINUE)
   {
      // soma recebe o valor retornado pela função
      sum = rollDice();

      // verifica se soma é igual ao pontos
      if (sum == myPoints)
      {
         // se verdade jogador ganha
         gameStatus = WON;
      } else { // se não
         // verifica se a soma é igual a sete
         if (sum == 7) // se verdade
         {
            // jogador perdeu
            gameStatus = LOST;
         }// end else if
      } // end else if            
   } // end while

   // mostra mensage de vitória ou derrota
   if (gameStatus == WON)
   {
      // exibe o resultado
      printf("Jogador venceu!");
   } // end if
   else {
      // resultado
      printf("Jogador perdeu!");
   } // end else

   return 0;
   
} // end main

// function
int rollDice( void )
{
   // VARIÁVEIS
   int die1; // dado 1
   int die2; // dado 2
   int workSum; // soma dados

   // dados recebem valor aleatórios
   die1 = 1 + (rand() % 6);
   die2 = 1 + (rand() % 6);
   workSum = die1 + die2; // soma os dados

   // exibe resultado
   printf("O jogador rolou %d + %d = %d\n", die1, die2, workSum);

   // retorna ressultado
   return workSum;

} // end rollDice