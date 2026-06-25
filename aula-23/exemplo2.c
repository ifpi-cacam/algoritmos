#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

#define UTF8_CODEPAGE 65001

float notas[10];
int posicao;

int main()
{
    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    for (posicao = 0; posicao < 10; posicao++){
        printf("Digite a nota da posição %d: \n", posicao);
        scanf("%f", &notas[posicao]);
    }
    printf("Mostrando as notas lidas:\n");
    posicao = 0;
    while (posicao <10){
        printf("Nota da posição %d: %.2f\n", posicao, notas[posicao]);
        posicao++;
    }
}