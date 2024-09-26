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
    int vetor[SIZE];
    
    // VARI�VEL
    int i;
    
    // inicializa vetor
    for(i = 2; i <= 10; i += 2) {
      vetor[i] = i;
    } // end for 
    
    printf("%s\n", "Valores:");
    
    // loop para exibir
    for(i = 2; i <= 10; i += 2) {
      printf( "%5d\n", vetor[i]); // imprime na tela e pula uma linha
    } // end for
    
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
