/**
 * Variáveis => são os nomes dados aos espaços 
 * na meória do computador.
 * Em C existe diferentes tipos de variáveis
 * Por exemp0lo: tipo inteiro(int) 147 ou -147;
 * real(float/double) 1.25, 98.333, -58.97;
 * caractere(char) 'a', 'A', '#', etc.
 */
// biblioteca padrão C
#include <stdio.h>

// finção principal
// Todo programa em C
// é executado dentro da função main
int main()
{ // início da função
   
   // declara e cria uma variável
   // do tipo inteira, de nome a 
   // que recebe o valor 23
   // o sinal de igual = 
   // é usado para atribuir valor a variável
   int a = 23;

   // exibe o valor da variável na tela
   printf("O valor da variavel a eh: %d\n\n", a);

   // retorna um valor
   return 0;

} // end de main