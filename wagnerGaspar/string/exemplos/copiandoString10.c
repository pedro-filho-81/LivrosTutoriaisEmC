/**
 * Copiando string com loop while
 */
#include <stdio.h>

int main()
{
   // vetores
   // declara, cria e inicializa uma String
   char palavras[50] = {"Estou aprendendo a programar com a linguagem C."};
   // declara, cria e incializa outra string
   // que vai receber a cópia do vetor palavras
   char copia[50] = {"Serei uma copia."};
   int i = 0; // para while
   
   printf("\nCopiando string com while:\n");
   printf("Cria duas Strings:\n");
   printf("char palavras[50] = {\"Estou aprendendo a programar com a linguagem C.\"};");
   printf("\nchar copia[50] = {\"Serei uma copia.\"};\n");

   // loop para copiar uma string
   // enquanto palavras não encontrar o caractere
   // fim de string faça
   while (palavras[i] != '\0')
   {
      // vetor copia recebe os valores 
      // do vetor palavras
      copia[i] = palavras[i];
      i++; // incrementa 1

   } // end while

   printf("    loop para copiar uma string\n    int i = 0;");
   printf("\n    while (palavras[i] != '\\0')\n    {"
            "\n\tcopia[i] = palavras[i];"
            "\n\ti++; // incrementa 1\n"
            "    };"
            "\n    String copiada:\n");
   // exibe o resultado
   printf("copia[50] depois: %s\n\n", copia);

   return 0;

} // end main