/**
Este exemplo mostra a utilização da estrutura de 
repetição do..while...
Nesta estrutura a condição lógica para a repetição do 
laço é avaliada no final...
*/
#include<stdio.h>
#include<stdbool.h>

/*
Exemplo: Enquanto o usuário digitar 1 ou 2 o 
programa mostra uma mensagem na tela...
Se o usuário digitar '1' o programa mostra 
a mensagem: "Numero 1";
Se o usuário digitar '2' o programa mostra 
a mensagem: "Numero 2";

Se o usuário digitar um numero diferente de 1 ou 
2 o programa encerra o laço...
*/

int main(){
  
  int num;
      
  do{    
     printf("Entre com o numero inteiro...");
     scanf("%d", &num);
     
     if(num==1)
       printf("Numero 1.......\n");
       
     if(num==2)
       printf("Numero 2.......\n");  
     
  }while((num!=1) && (num!=2));
  
  system("PAUSE");
  return 0;
}
 
 
