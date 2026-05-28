#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

float salario, aumento, novo;

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 
 
 printf("Digite o salário do trabalhador: ");
 scanf("%f", &salario);
 
 aumento = 0.25*salario;
 novo = salario + aumento;

 printf("O novo salário com aumento de 25%% é: %.2f", novo);
  
 return EXIT_SUCCESS;
}