#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 6.11 Bubble sort. O bubble sort apresentado na 
 * Figura 6.15  é ineficaz no caso de arrays grandes. 
 * Faça as modifica-  ções simples descritas a seguir 
 * para melhorar o desempenho do bubble sort.  
 * a) Após a primeira passada, o maior número estará 
 * certamente no elemento de número mais alto do 
 * array;  após a segunda passada, os dois maiores 
 * números  estarão ‘no lugar’ e assim por diante. Em 
 * vez de nove  comparações em cada passada, modifique 
 * o bubble  sort para que sejam feitas oito 
 * comparações na segunda passada, sete na terceira e 
 * assim por diante.  
 * b) Os dados no array talvez já estejam na ordem 
 * correta, ou na ordem quase correta, portanto, por 
 * que  fazer nove passadas se menos que isso já seria 
 * suficiente? Modifique a ordenação para verificar, 
 * ao final de cada passada, se alguma troca foi 
 * feita. Se  nenhuma troca tiver sido feita, então os 
 * dados já deverão estar na ordem certa, de modo que 
 * o programa deverá ser concluído. Se foram feitas 
 * trocas, então, pelo menos mais uma passada será 
 * necessária. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 200). Edição do Kindle.  
 * Pedro, 04/10/2024
 */
#define SIZE 30
int main() {

   // vetor
   int vetor[SIZE];

   // variáveis
   int i = 0, j = 0;
   int vl_igual, count = SIZE;

   srand(time(NULL));

   // loop para adicionar valores não repetidos no vetor
   do // faça 
   {
      // vetor recebe um valor aleatório
      vetor[i] = 1 + rand() % 30;
      // igual = 0, 
      // informa que o vetor não possui outro
      // valor igual ao gerado agora
      vl_igual = 0;
      // loop for para verificar se o vetor possui
      // um valor igual ao gerado agora
      for ( j = 0; j < i; j++)
      {
         // verificar se o valor do vetor j 
         // é igual ao valor do vetor i
         if (vetor[j] == vetor[i] ) // se verdade
         {
            // variável recebe o valor 1
            // indicando que são iguais
            vl_igual = 1;
         } // end if igual         
      } // end loop for pesquisa
      
      // se não existir
      if (vl_igual == 0)
      {
         // i será incrementado
         i++;
      }
      
      // enquanto i menor que size
   }while (i < SIZE);

   // loop para exibir os elementos do vetor
   printf("\nvetor original = {");
   for ( i = 0; i < count; i++)
   {
      printf("%3d ", vetor[i]);
   } // end for
   printf(" };");

   // variável
   int temp; // recebe valor do vetor
   int count2 = SIZE;
   // loop para ordenar o vetor
   // BOBBLE SORT 
   for ( int passos = 0; passos < count2 - 5; passos++)
   {
      for ( i = 0; i < count; i++)
      {
         if (vetor[i] > vetor[i + 1])
         {
            temp = vetor[i];
            vetor[i] = vetor[ i + 1];
            vetor[i + 1] = temp;
         } // end if         
      } // end for i
   } // end passos
   
   // loop para exibir os elementos do vetor
   printf("\nvetor ordenado = {");
   for ( i = 0; i < count; i++)
   {
      printf("%3d ", vetor[i]);
   } // end for
   printf(" };");   
      
   return 0;
} // end main