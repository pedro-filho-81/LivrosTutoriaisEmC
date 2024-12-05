/**
 * Exemplo de cadastro de alunos com vetor[]
 */
#include <stdio.h>
#include <stdlib.h>

#define tam 2 // define o tamanho do vetor

// estrutura cadastro de alunos
typedef struct 
{
   char aluno[100];  // nome do aluno
   char turma;       // turma (A, B, C, ETC)
   int sala;         // sala (1, 2, 3, etc.)
   // notas do trimestre
   float nota1, nota2, nota3, nota4;
}CadAlunos;

// função para adicionar os dados dos alunos
CadAlunos lerAlunos(CadAlunos alunos)
{
   printf("Nome do aluno: ");
   fgets(alunos.aluno, 100, stdin);
   printf("turma: ");
   scanf("%c", &alunos.turma);
   printf("Sala: ");
   scanf("%d", &alunos.sala);
   printf("Nota1: ");
   scanf("%f", &alunos.nota1);
   printf("Nota2: ");
   scanf("%f", &alunos.nota2);
   printf("Nota3: ");
   scanf("%f", &alunos.nota3);
   printf("Nota4: ");
   scanf("%f", &alunos.nota4);
   scanf("%c");

   return alunos;
} // end ler alunos

// procedimento para exibir os dados dos Alunos
void exibeAlunos(CadAlunos alunos)
{
   printf("Nome do aluno: %s", alunos.aluno);
   printf("Turma: %c\n", alunos.turma);
   printf("Sala: %d\n", alunos.sala);
   printf("Nota1: %.1f\n", alunos.nota1);
   printf("Nota2: %.1f\n", alunos.nota2);
   printf("Nota3: %.1f\n", alunos.nota3);
   printf("Nota4: %.1f\n\n", alunos.nota4);
} // end exibe alunos

int main()
{
   // variável
   int i = 0;

   // cria o vetor do tipo CadAlunos 
   // para armazenar os dados de 3 alunos
   CadAlunos cad_aluno[3];

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