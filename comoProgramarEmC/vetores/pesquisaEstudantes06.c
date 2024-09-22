// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela
    
    // variable
    int answer;
    int rating;
    
    // VETOR
    int frequency[FREQUENCY_SIZE] = { 0 };
    int responcy[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
            1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 10, 8, 6, 7, 5, 8, 1, 1, 6, 7, 5,
            6, 4, 8, 6, 10, 9 };
            
   // loop para somar as frequências
   for(answer = 0; answer < RESPONSE_SIZE; answer++) {
      ++frequency[ responcy[ answer ]  ];
   } // end for
   
   // exibe resultado
   printf("%s%17s\n", "Avaliação", "Frequência");
   
   // loop para exibir a frequência
   for(rating = 1; rating < FREQUENCY_SIZE; rating++) {
      printf("%6d%17d\n", rating, frequency[rating]);
   } // end for 

    printf( "Olá, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
