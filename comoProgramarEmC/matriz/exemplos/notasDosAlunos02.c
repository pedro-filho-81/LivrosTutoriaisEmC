#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAmS 4

// protótipos
int minimum(const int grades[][EXAmS], int pupis, int tests);
int maximum(const int grades[][EXAmS], int pupis, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAmS], int puplis, int tests);

int main()
{
   // variável
   int student; // contador de alunos

   // matriz
   const int studentGrades[STUDENTS][EXAmS] = 
               {
                  {77, 68, 86, 73},
                  {96, 87, 89, 78},
                  {70, 90, 86, 81}
               };

   printf("O array e: \n");
   printArray(studentGrades, STUDENTS, EXAmS);

   printf("maior nota = %d\nmenor nota = %d\n",
            maximum(studentGrades, STUDENTS, EXAmS),
            minimum(studentGrades, STUDENTS, EXAmS));

   for (student = 0; student < STUDENTS; student++)
   {
      printf("A nota média do aluno %d e %.2f\n",
               student, average(studentGrades, EXAmS));
   } // end for
   return 0;
} // end main

int minimum(const int grades[][EXAmS], int pupils, int test)
{
   int i, j;
   int lowgrade = 100;

   for ( i = 0; i < pupils; i++)
   {
      for (j = 0; j < test; j++)
      {
         if (grades[i][j] < lowgrade)
         {
            lowgrade = grades[i][j];
         } // end if         
      } // end for coluna      
   } // end for linha
   return lowgrade;
} // end minimum


int maximum(const int grades[][EXAmS], int pupils, int test)
{
   int i, j;
   int highgrade = 0;

   for ( i = 0; i < pupils; i++)
   {
      for (j = 0; j < test; j++)
      {
         if (grades[i][j] > highgrade)
         {
            highgrade = grades[i][j];
         } // end if         
      } // end for coluna      
   } // end for linha
   return highgrade;
} // end maximum

double average(const int setOfGrades[], int test)
{
   int i = 0;
   int total = 0;

   // soma todas as notas
   for ( i = 0; i < test; i++)
   {
      total += setOfGrades[i];
   } // end for

   return (double) total / test;
   
} // end average