#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

#define UTF8_CODEPAGE 65001

char meses[12][10] = 
{
    "Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
};
int posicao;

int main()
{
    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");
    posicao = 0;
    while(posicao<12){
        printf("Mês da posição %d: %s\n", posicao, meses[posicao]);
        posicao = posicao +1;
    }

}