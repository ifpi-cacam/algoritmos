#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include "saudacoes.h"


#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    bomDia();
    boaTarde();
    boaNoite();

    for(int i=0; i<3; i++){
        bomDia();
    }

    return EXIT_SUCCESS;
}