/**
 * Como criar um ponteiro para struct?
 * Aula - 189
 * Toda variável está associada a uma região de memória.
 * Assim, é possivel obter o endereço 
 * de qualquer variável e criar um ponteiro para 
 * qualquer variável.
 */
#include <stdio.h>

// cria a estrutura data
typedef struct
{
   // variáveis(campos)
   int dia, mes, ano;
}Data; // nome da estrutura

/**
 * Cria o procedimento que recebe um ponteiro do
 * tipo Data e exibe a data na tela.
*/
void imprimirData(Data *xPtr)
{
   // exibe a data na tela
   // xPtr->nome da variável ponteiro
   // -> significa ponteiro aponta para ponteiro
   printf("%d/%d/%d", xPtr->dia, xPtr->mes, xPtr->ano);
} // end imprimirData


// principal
int main()
{
   printf("\nCria o procedimento:\n\tvoid imprimirData(Data *xPtr)"
         "\nQue tem como parametro um ponteiro.\n");
   // cria a variável do tipo Data
   Data data;
   printf("Em main:\nCriamos a variavel do tipo Data:\n\tData data;");

   // cria um ponteiro do tipo Data
   Data *dataPtr;
   printf("\nDepois criamos o ponteiro:\n\tData *dataPtr;");
   // atribui o enderaço da variável data 
   // ao ponteiro *dataPtr
   dataPtr = &data;
   printf("\nApos atribuimos ao ponteiro o enderaco de data:\n\tdataPtr = &data;"
            "\nApos exibimos:");

   // exibe o endereço de data
   printf("\n\tEndereco de data: %p\n\tConteudo de dataPtr: %p\neh o endereco de data.", &data, dataPtr);

   // atribuimos valores aos campos da estrutura Data
   data.dia = 29;
   data.mes = 2;
   data.ano = 2021;

   printf("\nAtribuimos valores aos campos de Data:"
            "\n\tdata.dia = 29;\n\tdata.mes = 2;\n\tdata.ano = 2021;");

   printf("\nChamamos o procedimento:\n\timprimirData(dataPtr);\ne passamos como argumento o ponteiro.\n\tdataPtr");

   printf("\nE exibimos a data:\n\t%d/%d/%d\nprocessada pelo procedimento.", data.dia, data.mes, data.ano);

   printf("\n\n");
   return 0;
} // end main