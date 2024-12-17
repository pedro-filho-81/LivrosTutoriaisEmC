/**
 * & comercial informa o endereço de ...
 * Por que não se usa o & comercial ao ler
 * uma string com a função scanf()?
 * Todo vetor é um ponteiro.
 * Por isso, não precisamos passar o endereço 
 * do vetor do tipo char (string) na função scanf()
 * Exemplo: scanf("%100[^\n]", <nome do vetor string>)
 * Aula 186.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // declara uma string
   // o nome do vetor é um ponteiro
   // que aponta para o vetor[0]
   char palavra[100];

   // exibir
   printf("\nCria o vetor string palavra\npara 100 caracteres:\n\tchar palavra[100];");
   printf("\nO tamanho do tipo char eh: %d byte.\n", sizeof(char));
   printf("O tamanho da vetor palavra[100] eh: %d byte.\n", sizeof(palavra));
   printf("Um byte para cada caractere.\n");

   // entrada de dados
   printf("\nDigite uma palavra, ou uma frase: ");
   scanf("%100[^\n]", palavra);

   // exibe resultado
   printf("A palavra ou o texto digitado foi:\n");
   // exibe o texto digitado
   printf("%s\n", palavra);

   printf("\nENDERACO DA STRING PALAVRA\n");
   printf("O endereco de (palavra) eh: %p\n", palavra);
   printf("O endereço de (&palavra) eh: %p\n", &palavra);
   printf("O endereco de (&palavra[0]) eh: %p\n", &palavra[0]);

   printf("\n\n");
   return 0;

} // end main