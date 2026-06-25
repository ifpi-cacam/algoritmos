#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float saldo = 500.0;
    float meta = 4500.0;
    float deposito = 250.0;

    float saldoInicial = saldo;
    float totalDepositos = 0;
    int mes = 0;

    while(saldo < meta){

        mes++;

        saldo = saldo + deposito;
        saldo = saldo * 1.01;

        totalDepositos = totalDepositos + deposito;

        printf("Mes %d -> R$ %.2f\n", mes, saldo);
    }

    float rendimentos = saldo - (saldoInicial + totalDepositos);

    printf("\nJoao atingiu a meta em %d meses.\n", mes);
    printf("Valor acumulado: R$ %.2f\n", saldo);
    printf("Total obtido com rendimentos: R$ %.2f\n", rendimentos);

    return EXIT_SUCCESS;
}