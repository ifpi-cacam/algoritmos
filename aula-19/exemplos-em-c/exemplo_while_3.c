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
    bool achou = false;
    int limite = 100;
    int inf = 0, sup = limite;
    char opt;
    printf("Pense em um numero entre 0 e %d\n", limite);
    int metade = limite;
    while(!achou){
        metade = (int) (inf+sup)/2;
        printf("\nO número é menor que %d?(S/N)_", metade);
        scanf(" %c", &opt);
        if(opt=='S'){
            sup = metade;
        }
        if(opt=='N'){
            inf = metade;
        }
        if(metade==sup-1 || metade==inf+1){
            achou = true;
        }
    }
    printf("\nAchou o número: %d", metade);

 return EXIT_SUCCESS;
}