#include<stdio.h>

#define UTF8_CODEPAGE 65001

void inicializarIdioma(){
    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");
}

void mostrarMenu(){
    printf("------ SISTEMA DE CONTROLE DE NOTAS -----\n");
    printf("1_POPULAR NOTAS\n");
    printf("2_MOSTRAR NOTAS\n");
    printf("3_CALCULAR MEDIA\n");
    printf("4_CALCULAR MAIOR\n");
    printf("5_CALCULAR MENOR\n");
    printf("0_SAIR\n");
    printf("Escolha uma opção...");
}