/**
 * 3.5 Combine as instruções que você escreveu no 
 * Exercício 3.4  em um programa que calcule a soma dos 
 * inteiros de 1 a  10. Use a estrutura while para 
 * realizar um loop pelas  instruções de cálculo e 
 * incremento. O loop deverá terminar quando o valor de 
 * x chegar a 11. 
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 71). Edição do Kindle. 
 * 08/10/2024
 */

// Inclua biblioteca
#include <stdio.h>
#include <stdlib.h>

// função principal
int main()
{ // inicio main

    // Variável
    int x = 1;

    // Enquanto x for <= 10 faça
    while (x <= 10){ // inicio while

        // imprima
        printf("\nAntes do incremento x = %d, ", x);

        x++; // incrementa 1 a x

    } // fim while

    printf("\nDepois do incremento x = %d, Hello world!\n", x);

    return 0; // programa correto

} // fim main