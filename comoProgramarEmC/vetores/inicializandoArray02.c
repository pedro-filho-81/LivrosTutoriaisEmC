// incluir biblioteca
#include <stdio.h>
#include <locale.h>

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vetor
    int n[10] = {1, 2, 5, 6, 9, 8, 7, 4, 3, 10};

    // vari�vel
    int i;

    printf("%s%13s\n", "Elemento", "Valor");

    // loop for para exibir os valores do vetor
    for(i = 0; i < 10; i++) {
      printf("%5d%13d\n", i, n[i]);
    } // end for

    printf( "Ol�, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
