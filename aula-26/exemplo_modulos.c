#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

void modulo1(){
    int a = 3, b=2;
    int soma = (a+b);
    printf("Soma: %d\n", soma);
}

void modulo2(){
    int a = 5, b=7;
    int soma = (a+b);
    printf("Soma: %d\n", soma);
}

void modulo3(){
    int a = 0, b=1;
    int soma = (a+b);
    printf("Soma: %d\n", soma);
}

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    modulo1();
    modulo2();
    modulo3();

    return EXIT_SUCCESS;
}