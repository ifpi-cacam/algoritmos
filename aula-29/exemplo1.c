#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include "exemplo1.h"

#define UTF8_CODEPAGE 65001

float notas[5];

int main(){
    
    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    popularNotas(notas);
    mostrarNotas(notas);
    float m = calcularMedia(notas);
    float maior = calcularMaior(notas);
    float menor = calcularMenor(notas);
    printf("Maior elemento: %.2f\n", maior);
    printf("Menor elemento: %.2f\n", menor);    
    printf("Média: %.2f", m);    
    return EXIT_SUCCESS;
}