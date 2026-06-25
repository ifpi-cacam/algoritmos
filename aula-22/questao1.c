#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float valorInicial = 1400.00;
    float valorDivida = valorInicial;
    for(int i=0; i<12; i++){
        valorDivida = valorDivida*1.04;
        printf("Valor da divida no mes %d: %.2f\n", (i+1), valorDivida);
    }
    float totalJuros = valorDivida - valorInicial;
    printf("Valor final da dívida: %.2f\n", valorDivida);
    printf("Total de Juros no Período: %.2f\n", totalJuros);
    
    return EXIT_SUCCESS;
}