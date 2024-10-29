#include <stdio.h>

// função para mover os discos
void hanoi(int disco, char inicio, char meio, char fim) 
{
   // verifica se tem mais de um disco para o jogo
   if (disco >= 1)
   {
      // chama a função para mover o disco
      hanoi(disco - 1, inicio, fim, meio);
      
      // exibe o movimento do disco
      printf("O disco %d moveu-se da torre %c para torre %c\n", disco, inicio, fim);
      
      // move novamente o disco
      hanoi(disco - 1, meio, inicio, fim);
   } // end if
   
} // end hanoi

int main()
{
   // variável para o número de discos
   int disco = 0;

   // cabeçalho do programa
   printf("\n\tTORRE DE HANOI\n");

   // entrada de dados
   printf("Digite o numero de discos: ");
   scanf("%d", &disco); // aguarda entrada do usuário

   // chama a função e passa os parametros
   hanoi(disco, 'A', 'B', 'C');
   
   // retorna zero se programa terminou sem problemas
   return 0;

} // end main
