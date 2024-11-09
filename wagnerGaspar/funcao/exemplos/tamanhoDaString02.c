/**
 * Cria uma função que retorna o tamanho da string
 */
#include <stdio.h>
#include <string.h>

// cria a função para contar a quantidade 
// de caracteres da string
// int => tipo de retorno da função inteiro
// minhaStrlen => nome da função
// toda função tem parêntese ()
// dentro dos parênteses(tem, ou não tem parâmetros)
// os parâmetros recebem argumentos
int minhaStrlen(char str[])
{
   // variável
   int tam = 0; // para contar os caracteres da string

   // enquanto não chegar ao final da string faça
   while (str[tam] != '\0')
   {
      // conta os caracteres da string
      tam++; // incrementa 1 a tam
   } // end while   

   // retorna o valor de tam
   return tam;

} // end minhaStrlen

int main()
{
   // string
   char vet[20] = {"Ola. Bom dia!"};

   printf("\nEXIBIR O TAmANHO DA STRING\n");
   // exibe a string
   printf("String: %s\n", vet);

   // exibe o tamanho da string com a função strlen
   // da biblioteca string.h
   printf("\nFUNCAO DA BIBLIOTECA STRING.H\n");
   printf("strlen: %d\n", strlen(vet));
   
   // exibe o tamanho da string com a função 
   // minhaStrlen() criada pelo programador
   printf("\nFUNCAO CRIADA PELO PROGRAADOR.\n");
   printf("RETORNA O TAANHO DA STRING\nminhaStrlen: %d\n\n", minhaStrlen(vet));

   return 0; // final do prog

} // end main