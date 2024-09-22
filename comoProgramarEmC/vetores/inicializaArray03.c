// incluir biblioteca
#include <stdio.h>
#include <locale.h>
#define SIZE 10
// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela

    // array
    int n[SIZE] = {10, 20, 32, 45, 63, 84, 47, 39, 58, 13};
    
    // VARIÁVEIS
    int i;
    
    printf("vetor n:\n");
    
    // loop for para exibir valores do array
    for(i = 0; i < SIZE; i++) {
      printf( "%5d\n", n[i]); // imprime na tela e pula uma linha
    } // end for

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
