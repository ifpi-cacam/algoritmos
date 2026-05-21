#include<stdio.h>
#include<stdlib.h>

/**
 * Exemplo com código C compilando sem suporte a caracteres especiais com acentuação
 * Executável mostra as mensagens com codificação errada (no Windows)
 * Não aceita: ã, á, ç, â, etc
 */

int main(){
   printf("Caracteres especiais não são aceitos\n");
   printf("Sem codificação UTF-8 própria\n");
   printf("Exemplos quebrados: ã, á, ç, â");
   return EXIT_SUCCESS;
}