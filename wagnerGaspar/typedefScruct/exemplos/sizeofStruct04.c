/**
 * Como passar uma STRUCT como parâmetro para um procedimento?
 * Aula - 172
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
   // cria a variável pessoa do tipo struct
   Pessoa pessoa;
   // cria a variável dataNasc do tipo struct
   Nascimento dataNasc;

   // exibe sizeof das variáveis struct
   printf("\nSizeof de Struct");
   printf("\nsizeof de char eh: %d byte.", sizeof(char));
   printf("\nsizeof de vetor nome eh: %d byte.", sizeof(pessoa.nome));
   printf("\nSizeof de pessoa eh: %d byte.", sizeof(pessoa));
   printf("\nSizeof de data eh: %d byte.\n", sizeof(dataNasc));

   // entrada de dados
   printf("\nDigite o nome: ");
   fgets(pessoa.nome, 100, stdin);
   printf("Digite a idade: ");
   scanf("%d", &pessoa.idade);

   // enquanto não digitar o sexo como pedido repita
   while(pessoa.sexo != 'f' && pessoa.sexo != 'm') {
      printf("Digite (f ou m) para sexo: ");
      scanf(" %c", &pessoa.sexo);
   } // end while

   // entrada da data de nascimento
   printf("Digite a data de nascimento no formato dd, mm, aaaa:");
   scanf("%d%d%d", &pessoa.dataNasci.dia,
                  &pessoa.dataNasci.mes,
                  &pessoa.dataNasci.ano);
   
   // enquanto não digitar a data correta repita
   while((pessoa.dataNasci.dia < 1 || pessoa.dataNasci.dia > 31) ||
         (pessoa.dataNasci.mes < 1 || pessoa.dataNasci.mes > 12) ||
         (pessoa.dataNasci.ano < 1900 || pessoa.dataNasci.ano > 2050))
   { // inicio while data nasci
      printf("Digite a data de nascimento no formato dd, mm, aaaa:");
      scanf("%d%d%d", &pessoa.dataNasci.dia,
                     &pessoa.dataNasci.mes,
                     &pessoa.dataNasci.ano);
   } // end while data nasci

   // chama o procedimento
   imprimirPessoa(pessoa);

   printf("\n\n");
   return 0;

} // end main