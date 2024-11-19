/* Exercício 5.25 Achar o mínimo. Escreva uma função que retorne
  o menor de três números em ponto flutuante.
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).
  Edição do Kindle. Pedro Filho, 22/05/2020.*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

//protótipo de função
float menorNumero(float a, float b, float c);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variáveis
  float n1, n2, n3;
  int continuar = 1;

  // enquanto continuar igual a 1 faça
  while(continuar == 1) { // inicio while
    //entrada de dados
    printf("Digite três números diferentes: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    // variável menor recebe a função menorNumero
    float menor = menorNumero(n1, n2, n3);
    // imprime o menor entre eles
    printf("O menor número entre %.2f, %.2f e %.2f eh: %.2f\n", n1, n2, n3, menor);

    // pergunta se deseja continuar
    printf("\nDeseja continuar? [1-SIM / 0-NÃO]");
    scanf("%d", &continuar); // se sim continua se não termina programa
  } // fim while

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

//função menorNumero
float menorNumero(float a, float b, float c) {
  if(a < b && a < c){
    return a; // a é menor
  } // fim if
  else if(b < a && b < c) {
    return b; // b é menor
  } // fim else if
  else {
    return c; // c é menor
  } // fim else
} // fim função