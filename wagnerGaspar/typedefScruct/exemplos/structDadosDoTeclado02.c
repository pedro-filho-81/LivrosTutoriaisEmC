/**
 * Como criar uma struct na linguagem C
 * aula 168 - com dados vindo do teclado
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// primeira maneira de
// cria uma estrutura
// do tipo pessoa
typedef struct {
   int idade;
   char sexo;
   char nome[100];
}Pessoa;

int main()
{
   // cria a 1ª variável do tipo Pessoa
   Pessoa pessoa;

   // entrada de dados
   printf("\nDigite o nome: ");
   fgets(pessoa.nome, 100, stdin);
   printf("Digite a idade: ");
   scanf("%d", &pessoa.idade);
   printf("Digite o sexo: ");
   scanf(" %c", &pessoa.sexo);

   printf("\nCadastro de pessoa\nNome: %sIdade: %d\nSexo: %c",  pessoa.nome, pessoa.idade, pessoa.sexo);

   printf("\n\n");
   return 0;

} // end main