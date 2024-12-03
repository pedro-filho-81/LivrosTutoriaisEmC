/**
 * Como passar uma STRUCT como parârametro para uma
 * função
 * Aula - 173
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
Pessoa lerPessoa(Pessoa p)
{
   // cria a variável da estrutura Pessoa
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

   // chama a função lerPessoa que recebe como
   // parâmetro a variável pessoa
   // e atribui a variável da estrutura Pessoa
   pessoa = lerPessoa(pessoa);

   // chama o procedimento imprimirPessoa
   imprimirPessoa(pessoa);

   printf("\n\n");
   return 0;

} // end main