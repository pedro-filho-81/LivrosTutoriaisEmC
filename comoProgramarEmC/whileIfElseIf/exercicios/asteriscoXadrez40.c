/*Exercicio 3.40, Padrão asterisco em xadrez,
Livro C como programar, Pedro Filho, 02/05/2020. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() { // início main
	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  //Variável
  int linhas = 1;
  int colunas = 1;

  //faça enquanto linha for menor que 10
  // conte 10 vezes
  while(linhas <= 10) {

    // quando linha for
    if(linhas % 2 == 0){
      printf(" ");// imprima um espaço vazio
    } // fim if

    // faça enquanto a coluna for menor que 10
    while(colunas <= 10){
      printf("* "); // imprima
      colunas++; // incremente mais 1
    } // fim while 2

    printf("\n"); // imprima
    colunas = 1; // atribua um a coluna

    // incremente a linha em 1
    linhas++;

  } // fim while 1

} // fim main