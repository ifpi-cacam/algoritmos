#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota >= 7)
        printf("Aluno aprovado!");

    return EXIT_SUCCESS;
}