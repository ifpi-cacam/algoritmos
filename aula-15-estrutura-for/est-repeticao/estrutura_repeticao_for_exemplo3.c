/**
 * Construa um programa em C para receber as 6
 * notas de um aluno, calcular e mostrar a média
 * entre elas. 
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
  
  float nota, soma, media;
  int c;
  soma = 0;
  for(c=1; c<=6; c=c+1){
    printf("Digite a %da nota do aluno: ", c);
    scanf("%f", &nota);
    soma += nota;
  }
  media = soma/6;
  printf("A média das 6 notas é: %.2f", media);
  
 return EXIT_SUCCESS;
}