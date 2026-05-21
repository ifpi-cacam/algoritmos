#include<stdio.h>
#include<stdlib.h>
#include<locale.h> // para usar setlocale
#include<windows.h> // para usar SetConsoleOutputCP

#define UTF8_CODEPAGE 65001

int idade; // inteiro
float salario; // real

int main(){

   SetConsoleOutputCP(UTF8_CODEPAGE);
   SetConsoleCP(UTF8_CODEPAGE);

   printf("Digite sua idade: ");
   scanf("%d", &idade);
   printf("Sua idade atual: %d\n", idade);
   int nova = (idade+10);
   printf("Sua idade em 10 anos: %d\n", nova);
   printf("Digite seu salario: ");
   scanf("%f", &salario);
   float novoSal = (salario + 0.1*salario);
   printf("Seu salario com aumento de 10%%: %.3f", novoSal);
   return EXIT_SUCCESS;
}