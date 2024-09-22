// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define SIZE 7

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela
    
    // variable
    int face = 0;
    int roll = 0;
     
     // vetor
     int frequency[SIZE] = { 0 };
     
      srand(time(NULL));
      
      // loop for para adicionar valores
      for(roll = 1; roll <= 6000; roll++) {
         face = 1 + rand() % 6;
         ++frequency[ face ];
      } // end for face
      
      // cabe�alho
      printf("%s%15s\n", "Face", "Frenqu�ncia");
      
      // loop for para exibir resultado
      for(face = 1; face < SIZE; face++) {
         printf("%4d%15d\n", face, frequency[face] );
      } // end for exibir

    printf( "Ol�, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
