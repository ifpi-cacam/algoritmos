#include<stdio.h>
#include<stdlib.h>

int main(){
    float compra;
    printf("Valor da compra: ");
    scanf("%f", &compra);

    if(compra >= 100)
        printf("Voce ganhou desconto!");
    else
        printf("Sem desconto!");

    return EXIT_SUCCESS;
}