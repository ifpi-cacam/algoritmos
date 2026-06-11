/**
Este exemplo mostra a utilização da estrutura de 
repetição do..while...
Nesta estrutura a condição lógica para a repetição do 
laço é avaliada no final...
*/
#include<stdio.h>
#include<stdbool.h>

/*
Exemplo: mostrar todos o numeros inteiros menores 
que um dado numero lido...
*/

int main(){
  
  int i=1, num;
  
  printf("Entre com o numero inteiro...");
  scanf("%d", &num);
    
  do{    
    printf("Valor de i: %d\n", i);
    i = i+1;  
  }while(i<num);
  
  system("PAUSE");
  return 0;
}
