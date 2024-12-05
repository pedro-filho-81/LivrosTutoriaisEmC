/**
 * Exemplo de cadastro de alunos com vetor[]
 */
#include <stdio.h>
#include <stdlib.h>

#define tam 2

typedef struct // para notas
{
   // cria um vetor float de 4 posições
   // para armazenar as 4 notas
   float nota[4];
}Notas;

// estrutura cadastro de alunos
typedef struct 
{
   // variável da estrutura Notas
   Notas nota;
   char aluno[100];
   char turma;
   int sala;

}CadAlunos;

// função para ler os alunos
CadAlunos lerAlunos(CadAlunos alunos)
{
   int i = 0;

   printf("\nNome do aluno: ");
   fgets(alunos.aluno, 100, stdin);
   printf("turma: ");
   scanf("%c", &alunos.turma);
   printf("Sala: ");
   scanf("%d", &alunos.sala);
   // loop para cadastras as notas do aluno
   for ( i = 0; i < 4; i++)
   {
      printf("Digite nota%d: ", i + 1);
      scanf("%f", &alunos.nota.nota[i]);
   }
   scanf("%c"); // para o enter
 
   /*
      printf("Nota1: ");
      scanf("%f", &alunos.nota1);
      printf("Nota2: ");
      scanf("%f", &alunos.nota2);
      printf("Nota3: ");
      scanf("%f", &alunos.nota3);
      printf("Nota4: ");
      scanf("%f", &alunos.nota4);
      scanf("%c");
   */
  
   // retorne o aluno cadastrado
   return alunos;

} // end ler alunos

// procedimento exibeAlunos
void exibeAlunos(CadAlunos alunos)
{
   int i = 0;

   printf("\nNome do aluno: %s", alunos.aluno);
   printf("Turma: %c\n", alunos.turma);
   printf("Sala: %d\n", alunos.sala);
   // loop para exibir as notas
   for(i = 0; i < 4; i++)
      printf("Nota%d: %.1f\n", i + 1, alunos.nota.nota[i]);
   /*
   printf("Nota1: %.1f\n", alunos.nota1);
   printf("Nota2: %.1f\n", alunos.nota2);
   printf("Nota3: %.1f\n", alunos.nota3);
   printf("Nota4: %.1f\n\n", alunos.nota4);
   */
} // end exibe alunos

int main()
{
   // variável
   int i = 0;

   // cria o vetor do tipo CadAlunos 
   // para armazenar os dados dos alunos
   CadAlunos cad_aluno[tam];

   printf("\nCadastro dos alunos:\n");
   // loop para cadastrar os alunos
   for(i = 0; i < tam; i++)
   {
      // vetor cad_aluno recebe elementos 
      // retornados da função lerAlunos
      cad_aluno[i] = lerAlunos(cad_aluno[i]);
   } // end for

   printf("\nAlunos cadastrados:\n");
   // loop para exibir elementos do vetor
   for ( i = 0; i < tam; i++)
   {
      // exibe os valores do vetor
      exibeAlunos(cad_aluno[i]);
   } // end for
   
   printf("\n\n");
   return 0;

} // end main