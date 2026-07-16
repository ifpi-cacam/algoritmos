#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>
#include "exemplo1.h"
#include "menu.h"

float notas[5];

int main(){

    inicializarIdioma();
    int opcao;
    do{
        
        mostrarMenu();
        scanf("%d", &opcao);

        switch(opcao){
            case 1: popularNotas(notas); break;
            case 2: mostrarNotas(notas); break;
            case 3: 
               float media = calcularMedia(notas);
               printf("Média: %.2f\n", media); 
               break;
            case 4: 
                float maior = calcularMaior(notas);
                printf("Maior: %.2f\n", maior); 
                break;
            case 5: 
                float menor = calcularMenor(notas); 
                printf("Menor: %.2f\n", menor);
                break;
            default: opcao = 0; break;
        }

    }while(opcao!=0);
    

    return EXIT_SUCCESS;
}