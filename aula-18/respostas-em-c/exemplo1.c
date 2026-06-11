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

    for(i = 1; i <= N; i++){
        if(i % 2 == 0){
            printf("O número digitado é ímpar: %d\n", i);
        }
    }

    return EXIT_SUCCESS;
}