/**
 * Como criar uma struct na linguagem C
 * aula 167
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

// outra maneira de 
// criar uma estrutura
struct  Pessoa2 {
   int idade;
   char sexo;
   char nome[100];
};

int main()
{
   // cria a 1ª variável do tipo Pessoa
   Pessoa pessoa1;

   // cria a 2ª variável do tipo Pessoa
   struct Pessoa2 pessoa2;   

   // usando a variável pessoa1 criada 
   // para atribuir valores aos campos 
   // da estrutura com typedef
   pessoa1.idade = 61;
   pessoa1.sexo = 'm';
   strcpy(pessoa1.nome, "Pedro Filho");

   // usando a variável pessoa2 criada 
   // para atribuir valores aos campos
   // da struct sem typedef
   pessoa2.idade = 58;
   pessoa2.sexo = 'f';
   strcpy(pessoa2.nome, "Cleonice Santos");

   printf("\nCadastro de pessoa1\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

   printf("\nCadastro de pessoa2\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);

   printf("\n\n");
   return 0;

} // end main