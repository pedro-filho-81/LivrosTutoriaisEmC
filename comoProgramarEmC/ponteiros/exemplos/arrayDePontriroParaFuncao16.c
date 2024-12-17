/**
 * Fig. 7.28: fig07_28.c
 * Demonstrando um array de ponteiros para funções
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 240). Edição do Kindle. 
 */
#include <stdio.h>

// protótipos
void function1(int a);
void function2(int b);
void function3(int c);

int main()
{
   /**
    * inicializa array de 3 ponteiros para funções
    * que usam um argumento int que retorna void
    * O array f é inicializado com os nomes das três funções
    */
   void (*f[3])(int) = {function1, function2, function3};

   // variável para manter a escolha do usuário
   int choice; // escolha

   // entrada de dados
   printf("\nDigite um numero entre 0 e 2, 3 para sair: ");
   scanf("%d", &choice);

   /**
    * processa a escolha do usuário
    * enquanto valor digitado estiver entre
    * 0 e 2 faça
    */
   while (choice >= 0 && choice < 3)
   {
      /**
       * chama a função para o local selecionado do array
       * f[] e passa choice como argumento
       */
      (*f[choice])(choice);
      
      // entrada de dados
      printf("\nDigite um numero entre 0 e 2, 3 para sair: ");
      scanf("%d", &choice);

   } // end while

   printf("\nPrograma executado com sucesso.\n\n");
   return 0;

} // end main

// procedimento a
void function1(int a)
{
   printf("\tVoce digitou %d, o procedimento1 foi chamado.", a);
} // end function1

// procedimento a
void function2(int b)
{
   printf("\tVoce digitou %d, o procedimento2 foi chamado.", b);
} // end function1

// procedimento a
void function3(int c)
{
   printf("\tVoce digitou %d, o procedimento3 foi chamado.", c);
} // end function1