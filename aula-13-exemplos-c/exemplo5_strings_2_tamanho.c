#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

// possui 5 caracteres
// porém somente 4 armazenam valores
// o último armazena um terminador '\0'
char nome[5] = {'M', 'a', 'r', 'i', 'a'};

// uma String é um conjunto de char, com cada posição identificaca
// por um índice inteiro
// char - posicao 0 - nome[0] - 'M'
// char - posicao 1 - nome[1] - 'a'
// char - posicao 2 - nome[2] - 'r'
// char - posicao 3 - nome[3] - 'i'
// char - posicao 4 - nome[4] - 'a'

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);

   setlocale(LC_ALL, "pt_BR.UTF-8");

   printf("Nome: %s\n", nome);
   printf("1a posição: %c\n", nome[0]);
   printf("2a posição: %c\n", nome[1]);
   printf("3a posição: %c\n", nome[2]);
   printf("4a posição: %c\n", nome[3]);
   printf("5a posição: %c\n", nome[4]);

   int tamanho = strlen(nome);
   printf("Quantidade de caracteres: %d", tamanho);

   return EXIT_SUCCESS;
}