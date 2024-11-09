/**
 * Variáveis locais, globais e escopo de variáveis
 * na linguage de prograação C
 */
#include <stdio.h>
#include <string.h>

// cria uma variável global que é vista
// por todas as funções neste programa
int idade2 = 35;

// protótipo
void imprimir(int id);

// função principal
int main()
{
   // escopo local só é vista em main
   // cria variável local que recebe o valor 25
   int idade = 25;

   // exibe o valor da variável global
   printf("\nEscopo global:\nCria e inicializa\nint idade2 = %d\n", idade2);

   // exibe o valor da variável idade
   printf("\nEscopo local:\nint idade = %d\n", idade);

   // chama função imprimir que modifica o valor
   // da variável global
   imprimir(idade);

   printf("\nChama a funcao:\nimprimir(idade);\n");

   // exibe idade depois de modificada 
   // pela função imprimir
   printf("\nVariavel local:\nIdade = %d nao modificada pela funcao imprimir\n", idade);
   printf("\nVariavel global:\nIdade2 = %d modificada pela funcao imprimir\n\n", idade2);
   
   return 0;
} // end main

// cria um função para exibir o valor da variável
// int id => É considerada um variável local
// só é vista dentro da função imprimir
void imprimir(int id) {
   // escopo local, só é vista dentro da função
   ++id; // pré-incrementa a variável local id

   // chama a variável global idade2 => 
   // escopo global pode ser chamada 
   // e modificada por qualquer função
   ++idade2; // pré-incrementa em 1
} // end imprimir