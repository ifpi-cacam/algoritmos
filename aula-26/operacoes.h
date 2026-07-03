#include<stdio.h>

float notas[4];

void inicialiarNotas(){
  printf("Inicializando as notas...\n");
  for(int i=0; i<4; i++){
    printf("Digite a nota da posição %d: ", i);
    scanf("%f", &notas[i]);
  }
}

void mostrarNotas(){
  printf("Mostrando as notas...\n");
  for(int i=0; i<4; i++){
    printf("Nota da posição %d: %.2f \n", i, notas[i]);
  }

}

void calcularMedia(){
  printf("Calculando a média...\n");
  float soma =0;
  for(int i=0; i<4; i++){
    soma  = soma + notas[i];
  }
  printf("A média das notas é: %.2f", soma/4);

}


