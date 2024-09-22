// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 10

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vetor
    int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i, j;
    
    printf("%s%13s%17s\n", "Elemento", "Valor", "Histrograma");
    
    // loop for
    for(i = 0; i < SIZE; i++) {
      // exibe �ndice, valor e espa�os
      printf("%7d%13d%7s", i, n[i], "       ");    
      
      // loop for histrograma
       for(j = 0; j < n[i]; j++) {
       
         printf("%c", '*');
       
       } // end for
       
       printf("\n");
    } // end for
    
    printf( "Ol�, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
