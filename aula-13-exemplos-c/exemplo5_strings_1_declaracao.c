#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

// possui 10 caracteres
// porém somente 9 armazenam valores
// o último armazena um terminador '\0'
char nome[10] = {"Maria da Silva"}; 

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);

   setlocale(LC_ALL, "pt_BR.UTF-8");

   printf("Nome: %s\n", nome);
   int tamanho = strlen(nome);
   printf("Quantidade de caracteres: %d", tamanho);

   return EXIT_SUCCESS;
}