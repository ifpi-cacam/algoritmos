/**
 * Construa um programa em C para receber 2 números reais
 * e mostrar um menu de opções:
 * 1_ SOMA
 * 2_ SUBTRACAO
 * 3_ MULTIPLICACAO
 * 4_ DIVISAO
 * 5_ QUADRADO
 * 6_ RAIZ QUADRADA
 * Dependendo da opção que o usuário escolher
 * executar a operação matemática correspondente
 * ---
 * Se o usuário digitar 0 -> finalizar a aplicação
 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

#define UTF8_CODEPAGE 65001

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 

  float n1, n2, operacao;
  int opcao;

  do{
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("------- ESCOLHA UMA DAS OPÇÕES ------- \n");
    printf("1 -- SOMA \n ");
    printf("2 -- SUBTRACAO \n ");
    printf("3 -- PRODUTO \n ");
    printf("4 -- DIVISAO \n ");
    printf("5 -- QUADRADO \n ");
    printf("6 -- RAIZ QUADRADA \n ");
    printf("0 -- SAIR \n ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            operacao = (n1+n2); 
            break;
        case 2:                
            operacao = (n1-n2); 
            break; 
        case 3:                
            operacao = (n1*n2); 
            break; 
        case 4:                
            operacao = (n1/n2); 
            break; 
        case 5:                
            operacao =  pow(n1, 2);
            break; 
        case 6:                
            operacao =  sqrt(n1);
            break; 
        default:
            break;
    }
    if(opcao!=0){
       printf("Resultado da operação: %.2f\n", operacao);
    }

  }while(opcao!=0);

 return EXIT_SUCCESS;
}