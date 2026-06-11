/**
Este exemplo mostra a utilização da estrutura de 
repetição do..while...
Nesta estrutura a condição lógica para a repetição do 
laço é avaliada no final...
*/
#include<stdio.h>
#include<stdbool.h>

/*
Exemplo: mostrar todos o numeros inteiros menores que
10...
*/

int main(){
  
  int i=1;  
  do{    
    printf("Valor de i: %d\n", i);
    i = i+1;  
  }while(i<10);
  
  system("PAUSE");
  return 0;
}
