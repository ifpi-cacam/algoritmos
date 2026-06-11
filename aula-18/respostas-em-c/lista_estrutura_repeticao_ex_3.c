#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
    coletando dados sobre o salário e número de filhos.

    Escreva um algoritmo que leia o salário e o número de filhos de
    N habitantes e escreva:

    a) média de salário da população;
    b) média de número de filhos;
    c) percentual de pessoas com salário de até R$ 1.000,00.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, nf, N, somaf, soma1000;
    float s, mf, ms, somas, s1000;

    printf("Digite o total de pessoas da populacao: ");
    scanf("%d", &N);

    somas = 0;
    somaf = 0;
    soma1000 = 0;

    for(i = 1; i <= N; i++){

        printf("Digite o numero de filhos da pessoa %d: ", i);
        scanf("%d", &nf);

        printf("Digite o salario da pessoa %d: ", i);
        scanf("%f", &s);

        // somando o salario da populacao
        somas = s + somas;

        // somando o numero de filhos da populacao
        somaf = somaf + nf;

        // Determinar se a pessoa ganha ate 1000
        if(s <= 1000){
            soma1000 = soma1000 + 1;
        }
    }

    // calculando as medias

    // media dos salarios
    ms = somas / N;

    // media do numero de filhos
    mf = (float)somaf / N;

    // Porcentagem de pessoas que ganham ate 1000
    s1000 = ((float)soma1000 / N) * 100;

    // Mostrando as informacoes
    printf("Total de pessoas da populacao: %d\n", N);
    printf("Media dos salarios da populacao: %.2f\n", ms);
    printf("Media do numero de filhos da populacao: %.2f\n", mf);
    printf("%% de pessoas que ganham ate 1000: %.2f%%\n", s1000);

    return EXIT_SUCCESS;
}