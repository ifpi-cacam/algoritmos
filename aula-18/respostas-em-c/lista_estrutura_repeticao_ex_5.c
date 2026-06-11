#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    Confira o resultado de uma competição de natação entre dois clubes.

    O programa deve ler o número da prova e a quantidade de nadadores.
    O fim dos dados é indicado pelo número da prova igual a 0 e
    quantidade de nadadores igual a 0.

    Para cada nadador deverão ser lidos:
    - nome;
    - classificação;
    - tempo;
    - clube (1 ou 2).

    A pontuação segue o critério:

    Lugar   Pontos
    1       9
    2       6
    3       4
    4       3
    abaixo de 4  0

    Ao final de cada prova, o algoritmo deve escrever os totais de
    pontos de cada clube e determinar qual clube venceu a prova.

    Ao final de todas as provas, o algoritmo deve indicar a soma total
    de pontos de cada clube, informando qual o clube vencedor.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, nProva, nNadadores;
    char nome[100];
    int classificacao;
    int tempo;
    char clube;
    int pontos;

    int pontos1, pontos2;
    int totalPontos1, totalPontos2;

    totalPontos1 = 0;
    totalPontos2 = 0;

    do{

        printf("\n");
        printf("----------------------------------\n");

        printf("Digite o numero da prova: ");
        scanf("%d", &nProva);

        pontos1 = 0;
        pontos2 = 0;

        printf("Digite o total de nadadores para a prova %d: ", nProva);
        scanf("%d", &nNadadores);

        i = 1;

        while(i <= nNadadores){

            printf("Digite o nome do nadador %d: ", i);
            scanf("%s", nome);

            printf("Digite a classificacao do nadador %d [1/2/3/4]: ", i);
            scanf("%d", &classificacao);

            printf("Digite o tempo do nadador %d [em seg.]: ", i);
            scanf("%d", &tempo);

            printf("Digite o clube do nadador %d [1 ou 2]: ", i);
            scanf(" %c", &clube);

            // Determinar a pontuação

            if(classificacao == 1){
                pontos = 9;
            }else{
                if(classificacao == 2){
                    pontos = 6;
                }else{
                    if(classificacao == 3){
                        pontos = 4;
                    }else{
                        if(classificacao == 4){
                            pontos = 3;
                        }else{
                            pontos = 0;
                        }
                    }
                }
            }

            // Somar pontos ao clube

            if(clube == '1'){
                pontos1 = pontos1 + pontos;
            }

            if(clube == '2'){
                pontos2 = pontos2 + pontos;
            }

            // Mostrar dados do nadador

            printf("\nInformacoes do nadador %d:\n", i);
            printf("Nome: %s\n", nome);
            printf("Classificacao: %d\n", classificacao);
            printf("Tempo: %d\n", tempo);
            printf("Clube: %c\n", clube);
            printf("Pontuacao: %d\n", pontos);

            i = i + 1;
        }

        // Mostrar resultado da prova

        if(nNadadores > 0){

            printf("\n");
            printf("Numero de nadadores na prova %d: %d\n",
                   nProva, nNadadores);

            printf("Total de pontos do clube 1 na prova %d: %d\n",
                   nProva, pontos1);

            printf("Total de pontos do clube 2 na prova %d: %d\n",
                   nProva, pontos2);

            if(pontos1 > pontos2){
                printf("O clube 1 venceu a prova %d!\n", nProva);
            }else{
                if(pontos1 < pontos2){
                    printf("O clube 2 venceu a prova %d!\n", nProva);
                }else{
                    printf("Ocorreu empate na prova %d!\n", nProva);
                }
            }
        }

        // Acumular pontuação geral

        totalPontos1 = totalPontos1 + pontos1;
        totalPontos2 = totalPontos2 + pontos2;

    }while((nNadadores != 0) || (nProva != 0));

    // Resultado final

    printf("\n");
    printf("Informacoes das pontuacoes finais\n");
    printf("Pontos em todas as provas:\n");
    printf("Total de pontos do clube 1: %d\n", totalPontos1);
    printf("Total de pontos do clube 2: %d\n", totalPontos2);

    if(totalPontos1 > totalPontos2){
        printf("O clube 1 foi o vencedor geral!\n");
    }else{
        if(totalPontos1 < totalPontos2){
            printf("O clube 2 foi o vencedor geral!\n");
        }else{
            printf("Ocorreu empate! Nenhum vencedor!\n");
        }
    }

    return EXIT_SUCCESS;
}