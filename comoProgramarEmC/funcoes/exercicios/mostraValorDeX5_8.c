/* Exercício 5.8 Mostre o valor de x após
   a execução de cada uma das seguintes instruções:
   Deitel, Paul; Deitel, Harvey. C  Como Programar
   (Página 153).  . Edição do Kindle.
   Pedro Filho, 12/10/2024
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#include <math.h> // para função matemática

//função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");
  //variável
  float x = 0;

  printf("\nExibe o valor de x:");
  x = fabs(7.5);
  printf("x = fabs(7.5);\n%f\n", x);

  x = floor(7.5);
  printf("x = floor(7.5);\n%f\n", x);

  x = fabs(0.0);
  printf("x = fabs(0.0);\n%f\n", x);

  x = ceil(0.0);
  printf("x = ceil(0.0);\n%f\n", x);

  x = fabs(-6.4);
  printf(" x = fabs(-6.4);\n%f\n", x);

  x = ceil(-6.4);
  printf("x = ceil(-6.4);\n%f\n", x);

  x = ceil( - fabs(- 8 + floor(- 5.5)));
  printf("x = ceil( - fabs(- 8 + floor(- 5.5)));\n%f\n", x);

	system("pause"); // Pausa o sistema

	return 0; // fim do programa

} // fim main