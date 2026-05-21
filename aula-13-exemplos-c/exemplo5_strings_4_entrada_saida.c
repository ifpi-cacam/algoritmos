#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

// contem 10 carateres
// 9 para armazenar dados + '\0' para indicar final da lista de caracteres
char nome[30];

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);
   
   setlocale(LC_ALL, "pt_BR.UTF-8");

   printf("Digite seu nome: ");
   // Aceita entradas com espaços
   // ^ - comando - diferente
   // \n - comando - quebra de linha
   // tradução - aceite todos os caracteres digitados até tamanho 10 e que sejam diferentes de 'quebra de linha' = ENTER
   // Aceita todos os caracteres enquanto o usuario não digitar ENTER
   // O ideal seria usar scanf(" %9[^\n]", nome); para manter o ultimo caractere '\0' preservado
   scanf(" %30[^\n]", nome);
   printf("Nome: %s\n", nome); // A entrada 'Maria da Silva' só vai armazenar 'Maria da Silva'
   printf("Tamanho: %d", strlen(nome));

   return EXIT_SUCCESS;
}