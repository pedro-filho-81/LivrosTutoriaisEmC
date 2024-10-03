#include <stdio.h>
#include <stdlib.h>

/*
    6.10 Comissões de vendas. Use um array com subscrito único para resolver
    o problema a seguir. Uma empresa paga o  salário de seus vendedores com
    base em uma comissão. O  vendedor recebe R$ 200,00 por semana,
    e mais 9 por cento de suas vendas brutas nessa semana. Por exemplo, um
    vendedor, que totalize R$ 3.000,00 em vendas em uma  semana, receberá
    R$ 200,00 e mais 9 por cento de R$  3.000,00, ou seja, R$ 470,00.
    Escreva um programa em  C (usando um array de contadores) que determine
    quantos vendedores receberam salários dentro de cada um dos  seguintes intervalos
    (suponha que o salário de cada vendedor seja arredondado em um valor inteiro):
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
    Autor: Pedro Filho, 03/10/2024
*/

#define SIZE 10

int main()
{
    // constante
    const int fixo = 200;
    const float percent = 0.09;

    // vetores
    int vendedor[SIZE];
    int vlVendido[SIZE];
    float salario[SIZE];
    float comissao[SIZE];

    // variáveis
    int i, count = SIZE;

    system("cls"); // limpa tela
    
    // entrada de dados
    printf("\tENTRADA DE DADOS\n");
    for ( i = 0; i < count; i++)
    {
        printf("Vendedor %2d digite o total vendido R$ ", i + 1);
        scanf("%d", &vlVendido[i]);
        
        // atribui valores aos vetores
        vendedor[i] = i + 1;
        comissao[i] = vlVendido[i] * percent;
        salario[i] = comissao[i] + fixo;
    } // end for 

    // relatório das comissões
    printf("\n\t\tRELATORIO DAS COmISSOES\n");

    // header cabeçalho
    printf("%s%15s%15s%12s%15s\n", "Vendedor", "Vl Vendido", "Comissao", "Fixo", "Salario");

    // loop for para exibir valores dos vetores
    for ( i = 0; i < count; i++)
    {
        printf("%5d%15d%18.2f%12d%15.2f\n", vendedor[i], vlVendido[i], comissao[i], fixo, salario[i]);
    } // end for exibir
    // pula linha
    printf("\n");

    return 0; // end programa
} // end mair