#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

#define UTF8_CODEPAGE 65001

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8");
 int x, y, m; float mesada, soma, total=0; char mes[20]; 
 printf("::::::Calculando a mesada no periodo de 1 ano:::::::\n");
 for(x=1; x<=12; x++){
    switch(x){
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
    soma = 0;
    m = (x==7)?3:4;
    for(y=1; y<=m; y++){
        printf("Digite a mesada numero %d no mes %s: ", y, mes);
        scanf("%f", &mesada);
        soma = soma + mesada;
    }
    printf("Total recebido no mes %s: %.2f\n", mes, soma);
    total = total + soma;
 }
 printf("Total nos 12 meses: %.2f", total);
 
 return EXIT_SUCCESS;
}