/**
 * Exemplo
 * Jogo da velha com funções e procedimentos
 * Escrito por Wagner Gaspar
 * em março de 2021
 * 14/11/2024
 */
#include <stdio.h>
#include <stdlib.h>

// matriz global
char jogo[3][3];

// variáveis globais
int linha, coluna;

// PROTÓTIPOS DE FUNÇÕES
void inicializaMatriz();
void imprimir(); // exibe o tabuleiro
int ganhouPorLinha(int l, char c);
int ganhouPorLinhas(char c);
int ganhouPorColuna(int c, char j);
int ganhouPorColunas(char j);
int ganhouPorDiagPrin(char c);
int ganhouPorDiagSec(char c);
int ehValida(int l, int c);
void lerCoordenadas(char j);
int quantVazias();
void jogar();


int main()
{
   // variável
   int opcao;

   do {
      inicializaMatriz();
      jogar();

      printf("Digite 1 para jogar novamente: ");
      scanf("%d", &opcao);

   } while(opcao == 1);

   printf("\n\n");

   return 0;

} // end main

// FUNÇÕES E PROCEDImENTOS
/**
 * MMM
 * procedimento para inicializa a matriz 
 * com espaços espaços em branco
 */
void inicializaMatriz()
{
   // loop for para linha
   for(linha = 0; linha < 3; linha++) {
      // loop for para coluna
      for(coluna = 0; coluna < 3; coluna++)
         // inicializa Matriz coM uM espaço 
         jogo[linha][coluna] = ' ';
   } // end for linha
} // end inicializa matriz

/**
 * Procedimento para imprimir o tabuleiro
 * do jogo da velha na tela
 */
void imprimir()
{
   // imprime os índices das colunas
   printf("\n\n\t 0   1   2\n\n");

   // loop para linha e coluna
   for ( linha = 0; linha < 3; linha++) {
      for ( coluna = 0; coluna < 3; coluna++) {
         if (coluna == 0)
            printf("\t"); // exibe uma tabulação

         printf(" %c ", jogo[linha][coluna]); // exibe o caractere da posição 1  

         // se não for a última posição da linha
         if (coluna < 2)
            // exiba uma barra da divisão da coluna
            printf("|");

         // se for a última coluna
         if (coluna == 2)
            // exiba os índices da linha à direita
            printf("   %d", linha);
      } // end for coluna 

      printf("\n"); // pula linha

      // se linha menor de 2
      if (linha < 2)
         // exibe as linhas tracejadas
         printf("\t------------\n");
      
   } // end for linha
         
} // end imprimir

// função ganhou por linha
/**
 * função para verificar a vitória do jogador c
 * na linha 1
 * retorna 1 se ganhou
 * retorna 0 se perdeu
 */
int ganhouPorLinha(int l, char c) 
{
   // se os caracteres na linha for do jogador c
   if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2])
      return 1; // jogador ganhou
   else // se não
      return 0;  // jogador ainda não ganhou 
} // end ganhou por linha

/**
 * Função para verificar a vitória do jogador c
 * nas linhas
 *    1 - ganhou
 *    0 - não ganhou
 */
int ganhouPorLinhas(char c)
{
   // variável
   int ganhou = 0;

   // loop for para verificar se ganhou nas linhas
   for (linha = 0; linha < 3; linha++)
   {
      // chama a função ganhouPorLinh
      // e atribui o valor a variável ganhou
      // se a soMa igual a 3 jogador c ganhou
      ganhou += ganhouPorLinha(linha, c);
   }
   // retorne ganhou
   return ganhou;
} // end ganhou por linhas

/**
 * Função para verificar vitória do jogador j
 * na coluna c
 *       1 - ganhou
 *       0 - não ganhou ainda 
 */
int ganhouPorColuna(int c, char j)
{
   // verifica se todos os caracteres da coluna foreM
   // do jogador j
   if(jogo[0][c] == j && jogo[1][c] == j && jogo[2][c] == j)
      return 1; // retorne 1, j venceu
   else // se não
      return 0; // retorne 0, j não venceu ainda
} // end ganhou por coluna

/**
 * Função que verifica a vitória por colunas do jugador j
 *       1 - ganhou
 *       2 - não ganhou ainda
 */
int ganhouPorColunas(char j)
{
   // variável
   int ganhou = 0;

   // loop para somar os pontos ganhos do jogador j nas colunas
   for ( coluna = 0; coluna < 3; coluna++)
   {
      // ganhou recebe o retorno da função
      ganhou += ganhouPorColuna(coluna, j);
   } // end for

   return ganhou; // e retorna o valor da variável

} // end ganhou por colunas

/**
 * função para verificar a virória do jogador c 
 * na diagonal principal
 *       1 - gsnhou
 *       0 - não ganhou ainda
 */
int ganhouPorDiagPrin(char c)
{
   // verifica se jogador c ganhou na diagonal principal
   if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c) // se verdade
      // retorne o valor 1
       return 1;
   else // se não
      // retorne o valor zero 0
      return 0;
} // end ganhou diagonal principal

/**
 * função para verificar a vitória do jogador c na
 * diagonal secundária
 *       1 - ganhou
 *       0 - não ganhou ainda
 */
int ganhouPorDiagSec(char c)
{
   // verifica se jogador c ganhou na diagonal seundária
   if(jogo[0][3] == c && jogo[1][1] == c && jogo[2][0] == c) // se verdade
      // retorne 1
      return 1;
   else // se não
      // retorne 0
      return 0;
} // end ganhou na diagonal secundária

/**
 * Função que diz se a coordenada é válida ou não
 *    1 - válida
 *    0 - não é valida
 */
int ehValida(int l, int c)
{
   // se linha e coluna maior ou igual a zero, menor que três e jogo igual a espaço em branco
   if(l >= 0 && l < 3 && c >= 0 && c < 3 && jogo[l][c] == ' ') // se verdade
      // retorne 1
      return 1;
   else // se não
      // retorne zero
      return 0; 
} // end ehValida

/**
 * Procedimento para ler coordenadas 
 * digitadas pelo jogador  
 */
void lerCoordenadas(char j)
{
   // variáveis
   int linha, coluna;

   // entrada de dados
   printf("Digite linha e coluna: ");
   scanf("%d%d", &linha, &coluna);

   // enquanto a função ehValida igual a zero faça
   while (ehValida(linha, coluna) == 0)
   {
      // Entre com novos dados
      printf("Coordenadas inválidas! Digite outra linha e coluna: ");
      scanf("%d%d", &linha, &coluna);
   } // end while

   jogo[linha][coluna] = j;
   
} // end ler coordenadas

/**
 * Função para verificar a quantidade de 
 * casas vaziar no tabuleiro (não jogadas)
 */
// função quantidade vazias
int quantVazias()
{
   // variável
   int quantidade = 0;

   // loop para verificar se na matriz tem casas vazias
   for ( linha = 0; linha < 3; linha++) {
      for(coluna = 0; coluna < 3; coluna++)
         // se na matriz jogo tiver espaços vazios
         if(jogo[linha][coluna] == ' ')
            // incrementa a quantidade em 1
            quantidade++;
   } // end for linha
   // retorne a quantidade
   return quantidade;
} // end quantidade vaziao

/**
 * Procedimento jogar com o loop (repetição)
 * principal do jogo
 */
void jogar()
{
   int jogador = 1, vitoriaX = 0, vitoria0 = 0;
   char jogador1 = 'X', jogador2 = '0';

   do {
      imprimir();

      if(jogador == 1) {
         lerCoordenadas(jogador1);
         jogador++;
         vitoriaX += ganhouPorLinhas(jogador1);
         vitoriaX += ganhouPorColunas(jogador1);
         vitoriaX += ganhouPorDiagPrin(jogador1);
         vitoriaX += ganhouPorDiagSec(jogador1);
      } // end if jogador1
      else 
      {
         lerCoordenadas(jogador2);
         jogador = 1;
         vitoria0 += ganhouPorLinhas(jogador2);
         vitoria0 += ganhouPorColunas(jogador2);
         vitoria0 += ganhouPorDiagPrin(jogador2);
         vitoria0 += ganhouPorDiagSec(jogador2);
      } // end else

   } while(vitoriaX == 0 && vitoria0 == 0 && quantVazias() > 0);

   imprimir();

   if(vitoria0 == 1)
      printf("\nParabens Jogador2. Voce venceu!!!\n");
   else if(vitoriaX == 1)
      printf("\nParabens Jogador1. Voce venceu!!!\n");
   else
      printf("\nQue pena. Perderam!!!\n");

} // end jogar