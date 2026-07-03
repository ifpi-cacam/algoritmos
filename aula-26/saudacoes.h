#include<stdio.h>

char nome[20];

void leiaNome(){
    printf("Digite seu nome: ");
    scanf("%s", nome);
}

void bomDia(){
    leiaNome();
    printf("Bom dia, %s\n", nome);
}

void boaTarde(){
    leiaNome();
    printf("Boa tarde, %s\n", nome);
}

void boaNoite(){
    leiaNome();
    printf("Boa noite, %s\n", nome);
}

