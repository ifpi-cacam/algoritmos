/**
Exemplo de comando de repetição While..
Este programa recebe um número, calcula e mostra na 
tela o dobro do número, repetidamente, enquanto o 
número for menor que 100...
*/

int main(){
  
  int numero, dobro;
  
  printf("Digite um numero...");
  scanf("%d", &numero);

  while(numero<100){
     
     dobro = 2*numero;
     printf("O dobro do numero eh: %d\n", dobro);
     
     printf("Digite um novo numero: ");
     scanf("%d", &numero);
     
  }
  
  system("PAUSE");
  return 0;
}
