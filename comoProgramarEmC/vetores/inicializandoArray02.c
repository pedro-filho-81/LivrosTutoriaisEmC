// incluir biblioteca
#include <stdio.h>
#include <locale.h>

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    printf( "Ol�, Mundo C!\n"); // imprime na tela e pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
