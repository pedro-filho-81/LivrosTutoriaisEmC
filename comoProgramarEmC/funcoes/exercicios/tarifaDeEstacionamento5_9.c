/**
 * 5.9 Tarifa de estacionamento. Um estacionamento 
 * cobra  uma tarifa mínima de R$ 2,00 por uma 
 * permanência de  até três horas, e R$ 0,50 
 * adicionais por hora para cada  hora, ou parte dela, 
 * por até três horas. A tarifa máxima  para qualquer 
 * período de 24 horas é de R$ 10,00. Suponha  que 
 * nenhum carro estacione por mais de 24 horas de 
 * cada  vez. Escreva um programa que calcule e 
 * imprima as tarifas  de estacionamento para cada um 
 * dos três clientes que utilizaram esse 
 * estacionamento ontem. Você deverá informar  as 
 * horas de permanência de cada cliente. Seu programa  
 * deverá imprimir os resultados em um formato tabular 
 * e  deverá calcular e imprimir o total recebido 
 * ontem. O programa deverá usar a função 
 * calcularTaxas para determinar o valor devido por 
 * cliente. Sua saída deverá aparecer  no seguinte 
 * formato:  Carro Horas
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 153). Edição do Kindle. 
 * Pedro Filho, 12/10/2024 
 * */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
float calcularTaxa( float horas, float taxa);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// Variáveis
	int car1 = 0;
	int car2 = 0;
	int car3 = 0;
	float h1 = 0;
	float h2 = 0;
	float h3 = 0;
	float tx = 0;
  float somaHoras = 0;
  float somaTaxa = 0;

  // entrada de dados
  printf("Digite o 1º carro: ");
  scanf("%d", &car1);
  printf("informe o tempo que ficou: ");
  scanf("%f", &h1);
  printf("Digite o 2º carro: ");
  scanf("%d", &car2);
  printf("informe o tempo que ficou: ");
  scanf("%f", &h2);
  printf("Digite o 3º carro: ");
  scanf("%d", &car3);
  printf("informe o tempo que ficou: ");
  scanf("%f", &h3);

  //calcular
  somaHoras = h1 + h2 + h3;
  somaTaxa = calcularTaxa(h1, tx) + calcularTaxa(h2, tx) + calcularTaxa(h3, tx);

  // mostra o resultado
  printf("\n\t=-=-=-=-=-=-=-=-=-=-=\n");
  printf("\tCarro\tHoras\tValor\n");
  printf("\t%d\t%.1fh\t%.2f\n", car1, h1, calcularTaxa(h1, tx));
  printf("\t%d\t%.1fh\t%.2f\n", car2, h2, calcularTaxa(h2, tx));
  printf("\t%d\t%.1fh\t%.2f\n", car3, h3, calcularTaxa(h3, tx));
  printf("\tTotal\t%.2f\t%.2f\n", somaHoras, somaTaxa );
  printf("\t=-=-=-=-=-=-=-=-=-=-=\n");

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main

//função calcularTaxa
float calcularTaxa(float horas, float taxa) {

  //se horas menor ou igual a 3h faça
  if(horas <= 3) {
    taxa = 2.00; //taxa recebe dois reais
  } // fim if
  else if(horas > 3 && horas < 24) {
    // taxa recebe dois reas mas 0,50 centavos
    taxa = 2.00+ ((horas - 3) * 0.5);
  } // fim else
  else if(horas == 24) {
    taxa = 10.00; // taxa de R$10,00 reais
  } // fim else

  //retorna o valor da taxa
  return taxa;

} // fim função