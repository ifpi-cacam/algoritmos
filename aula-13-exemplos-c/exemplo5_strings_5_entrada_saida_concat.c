#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

char nome[20], sobrenome[20], nome_completo[40];

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);

   setlocale(LC_ALL, "pt_BR.UTF-8");

   printf("Digite seu nome: "); // ignora espaços
   scanf("%s", nome);

   printf("Digite seu sobrenome: "); // ignora espaços
   scanf("%s", sobrenome);

   // concatena 2 strings e armazena o resultado na primeira
   strcat(nome_completo, nome);
   strcat(nome_completo, " "); // espaço entre nome e sobrenome
   strcat(nome_completo, sobrenome);

   printf("Nome: %s\n", nome);
   printf("Sobrenome: %s\n", sobrenome);
   printf("Nome completo: %s\n", nome_completo);

   printf("Impressão dos Resultados: \n");
   printf("Tamanho do nome: %d\n", strlen(nome));
   printf("Tamanho do sobrenome: %d\n", strlen(sobrenome));
   printf("Tamanho do nome completo: %d\n", strlen(nome_completo));

   return EXIT_SUCCESS;
}