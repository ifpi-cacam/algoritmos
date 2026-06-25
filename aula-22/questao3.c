#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i=1;
    char mes[15], mesMaior[15], mesMenor[15];
    float tMediaMensal, tMediaAnual = 0;
    float maiorTemp, menorTemp;
    while(i<=12){
        switch(i){
            case 1: strcpy(mes, "Janeiro"); break; 
            case 2: strcpy(mes, "Fevereiro"); break; 
            case 3: strcpy(mes, "Março"); break; 
            case 4: strcpy(mes, "Abril"); break; 
            case 5: strcpy(mes, "Maio"); break;
            case 6: strcpy(mes, "Junho"); break;
            case 7: strcpy(mes, "Julho"); break;
            case 8: strcpy(mes, "Agosto"); break;
            case 9: strcpy(mes, "Setembro"); break;
            case 10: strcpy(mes, "Outubro"); break;
            case 11: strcpy(mes, "Novembro"); break;
            case 12: strcpy(mes, "Dezembro"); break;
            default: break;
        }
        printf("Digite a temperatura media no mes de: ", mes);
        scanf("%f", &tMediaMensal);
        if(i==1){
            maiorTemp = tMediaMensal;
            menorTemp = tMediaMensal;
        }
        tMediaAnual = tMediaAnual + tMediaMensal;
        if(tMediaMensal>maiorTemp){
            maiorTemp = tMediaMensal;
            strcpy(mesMaior, mes);
        }
        if(tMediaMensal<menorTemp){
            menorTemp = tMediaMensal;
            strcpy(mesMenor, mes);
        }
        i++;
    }
    printf("Média anual da temperatura %.2f: ", (tMediaAnual/12));
    printf("Maior temperatura registrada %.2f: ", maiorTemp);
    printf("Mes em que a maior temperatura registrada %s: ", mesMaior);
    printf("Menor temperatura registrada %.2f: ", menorTemp);
    printf("Mes em que a menor temperatura registrada %s: ", mesMenor);
    return EXIT_SUCCESS;
}