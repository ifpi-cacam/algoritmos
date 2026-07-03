#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include "exemplo1.h"


#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    modulo1();
    modulo2();
    modulo3();

    return EXIT_SUCCESS;
}