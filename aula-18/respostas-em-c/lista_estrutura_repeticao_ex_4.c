#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    Em uma eleição presidencial existem 3 (três) candidatos.
    Os votos são informados através de códigos.

    • 1, 2, 3 = voto para os respectivos candidatos;
    • 9 = voto nulo;
    • 0 = voto em branco.

    Escreva um algoritmo que leia o código votado por N eleitores.
    Ao final, calcule e escreva:

    a) total de votos para cada candidato;
    b) total de votos nulos;
    c) total de votos em branco;
    d) quem venceu a eleição.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int voto, total1, total2, total3, total0, total9, i, N;
    char vencedor[1000];

    total1 = 0;
    total2 = 0;
    total3 = 0;
    total0 = 0;
    total9 = 0;

    printf("Digite o total de eleitores: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        printf("Digite a intencao de voto do eleitor %d: ", i);
        scanf("%d", &voto);

        // verificar para quem foi o voto
        if(voto == 1){
            total1 = total1 + 1;
            printf("O eleitor %d votou no candidato 1\n", i);
        }

        if(voto == 2){
            total2 = total2 + 1;
            printf("O eleitor %d votou no candidato 2\n", i);
        }

        if(voto == 3){
            total3 = total3 + 1;
            printf("O eleitor %d votou no candidato 3\n", i);
        }

        if(voto == 9){
            total9 = total9 + 1;
            printf("O eleitor %d votou nulo\n", i);
        }

        if(voto == 0){
            total0 = total0 + 1;
            printf("O eleitor %d votou em branco\n", i);
        }
    }

    // Determinar quem venceu a eleição

    if((total9 > total1) && (total9 > total2) &&
       (total9 > total3) && (total9 > total0)){

        sprintf(vencedor,
                "Ninguem venceu a eleicao! Total de votos nulos maior que os demais!");

    }else{

        if((total0 > total1) && (total0 > total2) &&
           (total0 > total3) && (total0 > total9)){

            sprintf(vencedor,
                    "Ninguem venceu a eleicao! Total de votos brancos!");

        }else{

            if((total1 > total2) && (total1 > total3)){

                sprintf(vencedor, "Candidato 1");

            }else{

                if(total2 > total3){

                    if(total2 == total1){
                        sprintf(vencedor,
                                "Empate entre os candidatos 1 e 2");
                    }else{
                        sprintf(vencedor, "Candidato 2");
                    }

                }else{

                    if(total3 == total2){
                        sprintf(vencedor,
                                "Empate entre os candidatos 2 e 3");
                    }else{

                        if(total3 == total1){
                            sprintf(vencedor,
                                    "Empate entre os candidatos 1 e 3");
                        }else{
                            sprintf(vencedor, "Candidato 3");
                        }
                    }
                }
            }
        }
    }

    printf("\n");
    printf("Total de votos do candidato 1: %d\n", total1);
    printf("Total de votos do candidato 2: %d\n", total2);
    printf("Total de votos do candidato 3: %d\n", total3);
    printf("Total de votos nulos: %d\n", total9);
    printf("Total de votos em branco: %d\n", total0);
    printf("Resultado da eleicao: %s\n", vencedor);

    return EXIT_SUCCESS;
}