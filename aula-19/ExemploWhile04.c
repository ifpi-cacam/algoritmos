/**
Exemplo de estrutura de repetição usando o 
comando while...
*/

/*
Este programa mostra de todos os numeros inteiros 
entre 100 e 0, em ordem decrescente, somente aqueles 
que são pares...
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
  
  int numero=100;
  
  while(numero>=0){    
    
    if(numero%2==0)
       printf("Valor do numero: %d\n", numero);
    
    numero = numero-1;
    
  }  
      
  system("PAUSE");
  return 0;

}
