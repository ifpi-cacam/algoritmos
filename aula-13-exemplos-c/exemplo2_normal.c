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
   salario = 125.756755757575857676755;

   // Saída formatada
   // %d - para inteiros
   // %f - para real
   // %s - para caracteres - string >1
   // %c - para caracteres - string =1
   printf("Nome: %s", nome);
   printf("Idade: %d", idade);
   printf("Sexo: %c", sexo);
   printf("Salario: %f", salario);
   printf("Salario: %.2f", salario); // salario formatado - 2 casas decimais
   printf("Salario: %.3f", salario); // salario formatado - 3 casas decimais
   return EXIT_SUCCESS;
}