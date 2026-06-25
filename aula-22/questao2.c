#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i=1;
    char dia[20];
    float valorHora, qHoras, qHorasTotal = 0, valorDia, valorSem = 0;
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    while(i<=5){
        switch(i){
            case 1: strcpy(dia, "Segunda-feira"); break; 
            case 2: strcpy(dia, "Terça-feira"); break; 
            case 3: strcpy(dia, "Quarta-feira"); break; 
            case 4: strcpy(dia, "Quinta-feira"); break; 
            case 5: strcpy(dia, "Sexta-feira"); break;
            default: break; 
        }
        printf("Digite a quantidade de horas trabalhadas na %s: ", dia);
        scanf("%f", &qHoras);
        valorDia = valorHora * qHoras;
        qHorasTotal = qHorasTotal + qHoras;
        printf("Valor recebido na %s: %.2f", dia, valorDia);
        valorSem = valorSem + valorDia;
        i++;
    }
    printf("Total de horas trabalhadas na semana %.2f: ", qHorasTotal);
    printf("Total recebido na semana %.2f: ", valorSem);
    return EXIT_SUCCESS;
}