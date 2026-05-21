#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

char nome[10];

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);

   setlocale(LC_ALL, "pt_BR.UTF-8");

   printf("Digite seu nome: ");
   scanf("%s", nome); // Não usa o & para leitura de endereco da string, pois a propria já é variável de endereco
   printf("Nome: %s\n", nome); // A entrada 'Maria da Silva' só vai armazenar 'Maria'
   printf("Tamanho: %d", strlen(nome));

   return EXIT_SUCCESS;
}