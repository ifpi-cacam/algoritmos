#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Declaração de variáveis
int idade; // inteiro
char nome[12]; // caractere (string)
char sexo; // caractere
float salario; // real

int main(){
   idade = 18;
   strcpy(nome, "Maria Silva");
   sexo = 'F';
   salario = 125.756755;

   // Saída formatada
   // %d - para inteiros
   // %f - para real
   // %s - para caracteres - string >1
   // %c - para caracteres - string =1
   printf("Nome: %s\n", nome);
   printf("Idade: %d\n", idade);
   printf("Sexo: %c\n", sexo);
   printf("Salario: %f\n", salario);
   printf("Salario: %.2f\n", salario); // salario formatado - 2 casas decimais
   printf("Salario: %.3f\n", salario); // salario formatado - 3 casas decimais
   return EXIT_SUCCESS;
}