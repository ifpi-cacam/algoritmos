#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

#define UTF8_CODEPAGE 65001

float notas[5];

int main()
{
    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    notas[0] = 8.5;
    notas[1] = 1.5;
    notas[2] = 2.5;
    notas[3] = 3.0;
    notas[4] = 10;

    int posicao = 2;

    printf("Nota da posição %d: %.2f\n", posicao, notas[posicao]);
    posicao = posicao + 2;
    printf("Nota da posição %d: %.2f\n", posicao, notas[posicao]);
    notas[3] = 2 * notas[1] + notas[3];
    printf("Nota da posição 3: %.2f\n", notas[3]);

    for (posicao = 0; posicao < 5; posicao++){
        printf("Nota da posição %d: %.2f\n", posicao, notas[posicao]);
    }
}