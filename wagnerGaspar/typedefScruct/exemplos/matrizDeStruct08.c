/**
 * Como criar uma MATRIZ de STRUCT (array bidimensional)? 
 * Aula - 175
 */
#include <stdio.h>
#include <stdlib.h>

// cria a estrutura data de nascimento
typedef struct {
   /* campos da estrutura Nascimento */
   int dia, mes, ano;
}Nascimento;

// cria a estrutura Pessoa
typedef struct {
   // cria a variável dataNasci da estrutura Nascimento
   // dentro da estrutura Pessoa
   Nascimento dataNasci;
   
   // campos da estrutura Pessoa
   int idade;
   char sexo;
   char nome[100];
} Pessoa;

// função lerPessoa da estrutura Pessoa
// pode-se usar Pessoa como parâmetro
// ou usar Pessoa como variável
Pessoa lerPessoa(Pessoa p) // p[] parâmetro de pessoa
{
   // cria a variável p da estrutura Pessoa
   // Pessoa p;

   // entrada de dados
   printf("\nDigite o nome: ");
   fgets(p.nome, 100, stdin);
   printf("Digite a idade: ");
   scanf("%d", &p.idade);
   
   do 
   { // inicio do while
      // entrada de dados
      printf("Digite (f ou m) para sexo: ");
      scanf(" %c", &p.sexo);

   // enquanto não digitar o sexo como pedido repita
   } while(p.sexo != 'f' && p.sexo != 'm');

   // entrada da data de nascimento
   printf("Digite a data de nascimento no formato dd, mm, aaaa:");
   scanf("%d%d%d", &p.dataNasci.dia,
                  &p.dataNasci.mes,
                  &p.dataNasci.ano);
   
   // enquanto não digitar a data correta repita
   while((p.dataNasci.dia < 1 || p.dataNasci.dia > 31) ||
         (p.dataNasci.mes < 1 || p.dataNasci.mes > 12) ||
         (p.dataNasci.ano < 1900 || p.dataNasci.ano > 2050))
   { // inicio while data nasci 
      printf("Digite a data de nascimento no formato dd, mm, aaaa:");
      scanf("%d%d%d", &p.dataNasci.dia,
                     &p.dataNasci.mes,
                     &p.dataNasci.ano);
   } // end while data nasci
   scanf("%c"); // limpa o boffer do teclado
   // retorna p
   return p;
} // end função lerPessoa

// procedimento imprimir pessoa
// recebe como parâmetro a estrutura Pessoa
void imprimirPessoa(Pessoa p)
{
   // exibe resultado
   printf("\nPessoa Cadastrada:\nNome: %sIdade: %d\nSexo: %c\n", 
               p.nome, p.idade, p.sexo);
   
   printf("Data de nasci: %d/%d/%d\n", p.dataNasci.dia,
                                       p.dataNasci.mes,
                                       p.dataNasci.ano);
} // end imprimirPessoa

int main()
{
   // variável
   int i = 0;
   int j = 0;

   // cria a Matriz pessoas[][] do tipo struct Pessoa
   Pessoa pessoas[1][1];

   // loop for para adicionar dados na Matriz pessoas
   for( i = 0; i < 1; i++) {
      for(j = 0; j < 1; j++)
      // chama a função lerPessoa que recebe como
      // parâmetro a Matriz pessoas
      // e atribui a Matriz da estrutura Pessoa
      pessoas[i][j] = lerPessoa(pessoas[i][j]);
   } // end for i

   // loop for para imprimirPessas
   for(i = 0; i < 1; i++) {
      for(j = 0; j < 1; j++)
      // chama o procedimento imprimirPessoa
      imprimirPessoa(pessoas[i][j]);
   } // end for imprimir

   printf("\n\n");
   return 0;

} // end main