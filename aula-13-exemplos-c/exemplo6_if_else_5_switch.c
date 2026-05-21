#include<stdio.h>
#include<stdlib.h>

int main(){
    int opcao;
    printf("1-Deposito\n2-Saque\n3-Saldo\nEscolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: printf("Deposito selecionado!"); break;
        case 2: printf("Saque selecionado!"); break;
        case 3: printf("Saldo selecionado!"); break;
        default: printf("Opcao invalida!");
    }

    return EXIT_SUCCESS;
}