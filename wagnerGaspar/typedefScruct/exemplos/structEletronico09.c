/**
 * Como construir o tipo Eletrônico com TYPEDEF STRUCT (array Unidimensional)? 
 * Aula - 176
 */
#include <stdio.h>
#include <stdlib.h>

// cria a estrutura Eletronico
typedef struct {

   // campos da estrutura Eletrônico
   // strings (vetores unidimensionais)
   char tipo[100];   // tipo de aparelho eletrônico
   char marca[50];   // marca do aparelho
   char modelo[25];  // modêlo do aparelho
   char descricao[500];// descreve o aparelho

   // variáveis
   char energia;     // tipo de energia
   int quantidade;   // quantidade no estoque
   char codigo;       // código do produto

} Eletronico; // nome da estrutura

// função lerEletronico da estrutura Eletronico
// lê os dados de um eletrônico e retorna um valor
// para quem chamou
// pode-se usar o tipo Eletronico como parâmetro
// ou usar o tipo Eletronico para variável
// (e) é a variável parâmetro da estrutura Eletronico
Eletronico lerEletronico(Eletronico e)
{
   // cria a variável (e) do tipo Eletronico
   // Eletronico e;

   // entrada de dados
   printf("\nDigite o tipo: ");
   fgets(e.tipo, 100, stdin);
   printf("Digite a marca: ");
   fgets(e.marca, 50, stdin);
   printf("Digita a modelo: ");
   fgets(e.modelo, 25, stdin);
   printf("Eficiencia energetica: ");
   scanf("%c", &e.energia);
   scanf("%c"); // para o Enter
   printf("Digite a descricao: ");
   fgets(e.descricao, 500, stdin);
   printf("Quantidade e Codigo: ");
   scanf("%d%c", &e.quantidade, &e.codigo);
   scanf("%c"); // para o Enter

   // retorna a estrutura
   return e; 

} // end função lerEletronico

// procedimento imprimir eletronico
// recebe como parâmetro a estrutura Eletronico
// sendo (e) a variável da estrutura
void imprimirEletronico(Eletronico e)
{
   // exibe resultado
   printf("\nProduto Cadastrado:\n");
   printf("Tipo: %s", e.tipo);
   printf("marca: %s", e.marca);
   printf("Digita a modelo: %s", e.modelo);
   printf("Eficiencia energetica: %c", e.energia);
   printf("Digite a descricao: %s", e.descricao);
   printf("Quantidade no estoque: %d\n", e.quantidade);
   printf("Codigo: %d\n", e.codigo);

} // end imprimirPessoa

int main()
{
   // cria a Variável ele da estrutura Eletronico
   Eletronico ele;

   // chama a função lerEletronico que recebe como
   // parâmetro a variável ele e atribui um valor 
   // a essa mesma variável
   ele = lerEletronico(ele);
   
   // chama o procedimento imprimirEletronico
   // que recebe como parâmetro a variável ele
   // do tipo Eletronico
   imprimirEletronico(ele);

   printf("\n\n");
   return 0;

} // end main 