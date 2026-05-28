/**
 * Construa um programa em C
 * para mostrar todos os numeros
 * inteiros menores que 100
 * e que sejam pares!
 */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 

 int i;

 for(i=1; i<=100; i=i++){
   if(i%2==0){// se é par
    printf("%d\n", i);
   }
 }
  
 return EXIT_SUCCESS;
}