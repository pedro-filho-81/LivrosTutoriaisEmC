/**
 * Fig. 7.21: fig07_21.c
 * Copiando uma string usando notação de array e 
 * notação de ponteiro.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 230). Edição do Kindle. 
 */
#include <stdio.h>

// protótipos
void copy1(char * const s1, const char * const s2);
void copy2(char *s1, const char *s2);

int main()
{
   // cria strings
   char string1[10]; // array para string1
   printf("\nCria uma string para 10 caracteres:\n\tchar string1[10];");

   printf("\nCria um ponteiro para string:\n\tchar *string2 = \"Estou aprendendo ponteiro.\";");
   char *string2 = "Estou aprendendo ponteiro."; // ponteiro para string2

   char string3[10]; // array para string3
   printf("\nCria uma string para 10 caracteres:\n\tchar string3[10];");

   char string4[] = "Adeus"; // cria um ponteiro para a string4
   printf("\nCria um ponteiro para uma string:\n\tchar string4[] = \"Adeus\";");

   // chama a função
   printf("\n\nChama o procedimento copy1\nque faz a copia da string2 para string1:\n\tcopy1(string1, string2);");
   
   copy1(string1, string2);

   printf("\n\nExibe os elementos da string1:"
            "\nQue sao os caracteres da string2"
            "\n\tprintf(\"string1 = %%s\", string1);");
   
   printf("\n\t\tstring1 = %s\n", string1);

   // chama a função
   printf("\nChama o procedimento copy2\nque faz a copia da string4 para string3:\n\tcopy2(string3, string4);");
   
   copy2(string3, string4);
   
   printf("\n\nExibe os elementos da string3:"
            "\nQue sao os caracteres da string4"
            "\n\tprintf(\"string3 = %%s\", string4);");
   
   printf("\n\t\tstring3 = %s\n", string3);

   printf("\n\n");
   return 0;

} // end main

/**
 * A função copy1 usa a notação de subscrito de array 
 * para copiar a string de s2 no array de caracteres s1.
 * A  expressão s1[i] = s2[i] copia um caractere de s2 
 * em s1.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 231). Edição do Kindle. 
 */
void copy1(char * const s1, const char * const s2)
{
   /**
    * loop for para atribuir os valores de s2 para s1
    * vetor s1[i] recebe os caracteres de s2[i]
    * enquanto a expressão (s1[i] = s2[i]) for 
    * diferente de '\0' fim de string
   */
   for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
   {

   } // end for
} // end copy1

/**
 * O procedimento copy2 usa ponteiros e aritmética de 
 * ponteiro para copiar a string de s2 no array de 
 * caracteres s1.
 * Deitel, Paul; Deitel, Harvey. C Como Programar 
 * (Portuguese Edition) (p. 231). Edição do Kindle. 
 */
void copy2(char *s1, const char *s2)
{
   /**
    * a expressão (*s1 = *s2) realiza a operação de 
    * cópia. Após a atribuição na condição, 
    * os ponteiros são incrementados para que apontem 
    * para  o próximo elemento do array s1 e o próximo 
    * caractere de s2, respectivamente. 
    * Deitel, Paul; Deitel, Harvey. C Como Programar 
    * (Portuguese Edition) (p. 231). Edição do Kindle. 
    */
   for ( ; (*s1 = *s2); s1++, s2++)
   {

   } // end for
} // end copy2