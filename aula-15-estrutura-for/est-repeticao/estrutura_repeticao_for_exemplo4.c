/**
 * Construa um programa em C para ler
 * 10 números inteiros positivos e 
 * mostrar o maior deles 
 * */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 
 
 int numero, maior = 0, c;
 for(c=1; c<=10; c++){
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &numero);
  if(numero>maior){
    maior = numero;
  }
 }
 printf("O maior dos números é: %d", maior);
  
 return EXIT_SUCCESS;
}