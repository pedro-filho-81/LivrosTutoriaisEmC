// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localização geográfica

    system("cls"); // limpa a tela
    
    // vetores
    char strings01[20];
    char strings02[] = "String literal";
    
    // variável
    int i = 0;
    
    // entrada de dados
    printf("Digite uma string: ");
    scanf("%s", strings01);
    
    // exibe resultado
    printf("String1 é %s\n string2 é: %s\n"
           "String1 com espaços entre caracteres  é: \n ",
           strings01, strings02  );
           
   for(i = 0; i < strings01[i] != '\0'; i++) {
      printf("%c ", strings01[i]);
   }
           
    // printf( "Olá, Mundo C!\n"); // imprime na tela e pula uma linha

   //  system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
