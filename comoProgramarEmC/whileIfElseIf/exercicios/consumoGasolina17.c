/**
 * 3.17 Consumo de gasolina. Os motoristas se preocupam  com 
 * o consumo de combustível de seus automóveis.  Um 
 * motorista manteve um registro do número de abastecimentos 
 * que fez, registrando também o número de  quilômetros 
 * rodados e de litros obtidos a cada abastecimento. 
 * Desenvolva um programa que peça o número de  quilômetros 
 * dirigidos e a quantidade de litros obtidos a  cada 
 * abastecimento. O programa deverá calcular e exibir  a 
 * quantidade de quilômetros rodados por litros usados.  
 * Depois de processar toda a informação, o programa deverá 
 * calcular e exibir o total combinado de quilômetros  por 
 * litro para todos os abastecimentos. Veja um exemplo  do 
 * diálogo de entrada/saída: 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 74). Edição do Kindle. 
 * Autor: Pedro Filho, 14/01/2021
*/

// Incluir Biblioteca
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int contador = 0;
   int kmDirigidos = 0; // quilômetros dirigidos
   int totalKmRodados = 0;
   float litrosAbastecidos = 0; // para os litros abastecidos
   float somaAbastecimentos = 0;
   float consumoAtual = 0; // calcular o consumo atual
   float consumoTotal = 0;

   // cabeçalho
   printf( "\tCONSUMO DE COMBUSTÍVEL\n" );

   // entrada de dados
   printf( "Quantos litros abasteceu [ -1 para sair ]: " ); // prompt
   scanf( "%f", &litrosAbastecidos );

   // enquanto litros abastecidos diferente de -1 faça
   while( litrosAbastecidos != -1 )
   {
      // contar os abastecimentos
      contador++; // soma 1 ao contador

      // soma dos abastecimentos
      somaAbastecimentos += litrosAbastecidos;

      // entrada dos kms dirigidos
      printf( "Informe quantos quilômetros dirigiu: " ); // prompt
      scanf( "%d", &kmDirigidos ); // entrada do usuário

      // somar os quilometros dirigidos
      totalKmRodados += kmDirigidos;

      // calcular o consumo atual
      consumoAtual = kmDirigidos / litrosAbastecidos;
      // somar o consumo atual
      consumoTotal += consumoAtual;

      // imprimir resultado
      printf( "O consumo atual de combustível é de %f Km / l\n\n", consumoAtual );

      // informe o abastecimento
      printf( "Quantos litros abasteceu [ -1 para sair ]: " ); // prompt
      scanf( "%f", &litrosAbastecidos );

      // imprimir resultado
   } // fim while

   // se contador maior que zero
   if( contador > 0 ) {

      // imprimir resumo da viagem
      printf( "\n\tRESUMO DA VIAGEM\n" );
      printf( "Você abasteceu %d vezes.\n", contador );
      printf( "Total abastecido %.2f litros.\n", somaAbastecimentos );
      printf( "Percorreu %d Km.\n", totalKmRodados );
      printf( "Consumo total %f Km/l\n\n", consumoTotal );
   } // fim if

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN