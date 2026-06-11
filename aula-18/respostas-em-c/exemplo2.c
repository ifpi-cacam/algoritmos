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

    int i, N;

    printf("Entre com um número inteiro: ");
    scanf("%d", &N);

    i = 1;

    while(i <= N){
        if(i % 2 == 0){
            printf("O número digitado é ímpar: %d\n", i);
        }

        i = i + 1;
    }

    return EXIT_SUCCESS;
}