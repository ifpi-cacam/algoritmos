/**
Exemplo de estrutura de repetição usando o 
comando while...
*/

/*
Este programa mostra um numero inteiro na tela, e
incrementa o valor desse numero enquanto o usuario 
nao digitar '0'. Se o usuário digitar 0, ele encerra 
o programa...
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
  
  int numero=0;
  int opcao=1;
  
  while(opcao!=0){    
    numero = numero+1;
    printf("Numero: %d\n", numero);
    printf("Digite zero para encerrar agora!!\n");
    scanf("%d", &opcao);     
  }
      
  system("PAUSE");
  return 0;

}
