#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:
    Um fazendeiro possui fichas de controle sobre sua boiada.
    Cada ficha contém número de identificação, nome e peso (em kg) do boi.
    Escreva um algoritmo que leia os dados de N fichas e ao final,
    escreva o número de identificação e o peso do boi mais magro
    e do boi mais gordo.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numMaior, numMenor, num, N, i;
    char nome[100];
    float peso, maiorpeso, menorpeso;

    // PASSO 1: Ler o número correspondente à quantidade de bois
    printf("Digite a quantidade de bois: ");
    scanf("%d", &N);

    maiorpeso = 0;
    menorpeso = 2000;

    // PASSO 2: Ler cada linha correspondente às informações de 1 boi (N vezes)
    for(i = 1; i <= N; i++){

        printf("Digite o numero do boi da posicao %d: ", i);
        scanf("%d", &num);

        printf("Digite o nome do boi da posicao %d: ", i);
        scanf("%s", nome);

        printf("Digite o peso do boi da posicao %d: ", i);
        scanf("%f", &peso);

        if(peso > maiorpeso){
            maiorpeso = peso;
            numMaior = num;
        }

        if(peso < menorpeso){
            menorpeso = peso;
            numMenor = num;
        }
    }

    printf("O boi de maior peso tem %.2f quilos\n", maiorpeso);
    printf("O boi de maior peso tem numero %d\n", numMaior);

    printf("O boi de menor peso tem %.2f quilos\n", menorpeso);
    printf("O boi de menor peso tem numero %d\n", numMenor);

    return EXIT_SUCCESS;
}