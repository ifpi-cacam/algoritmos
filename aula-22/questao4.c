#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char cand1[50], cand2[50], cand3[50];
    int eleitores;
    int voto;
    int v1 = 0, v2 = 0, v3 = 0, vn = 0;
    int i = 1;

    printf("Digite o nome do candidato 1: ");
    scanf(" %49[^\n]", cand1);

    printf("Digite o nome do candidato 2: ");
    scanf(" %49[^\n]", cand2);

    printf("Digite o nome do candidato 3: ");
    scanf(" %49[^\n]", cand3);

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);

    while(i <= eleitores){

        printf("Voto do eleitor %d (1-%s, 2-%s, 3-%s, 0-nulo): ", i, cand1, cand2, cand3);
        scanf("%d", &voto);

        if(voto == 1){
            v1++;
        }else if(voto == 2){
            v2++;
        }else if(voto == 3){
            v3++;
        }else{
            vn++;
        }

        i++;
    }

    printf("%s -> %d votos (%.2f%%)\n", cand1, v1, (v1 * 100.0 / eleitores));
    printf("%s -> %d votos (%.2f%%)\n", cand2, v2, (v2 * 100.0 / eleitores));
    printf("%s -> %d votos (%.2f%%)\n", cand3, v3, (v3 * 100.0 / eleitores));
    printf("Votos nulos: %d\n", vn);

    if(vn > eleitores / 2){
        printf("Eleicao anulada\n");
    }else{

        if(v1 > v2 && v1 > v3){
            printf("Vencedor: %s\n", cand1);
        }else if(v2 > v1 && v2 > v3){
            printf("Vencedor: %s\n", cand2);
        }else if(v3 > v1 && v3 > v2){
            printf("Vencedor: %s\n", cand3);
        }else{
            printf("Empate entre candidatos\n");
        }

    }

    return EXIT_SUCCESS;
}