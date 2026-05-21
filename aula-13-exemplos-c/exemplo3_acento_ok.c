#include<stdio.h>
#include<stdlib.h>
#include<locale.h> // para usar setlocale
#include<windows.h> // para usar SetConsoleOutputCP

/**
 * Exemplo com código C compilando COM suporte a caracteres especiais com acentuação
 * Executável mostra as mensagens com codificação errada (no Windows)
 * Aceita: ã, á, ç, â, etc
 */

// Constante simbólica para representar a página de código UTF-8
// 65001 é o identificador UTF-8 utilizado pelo Windows
#define UTF8_CODEPAGE 65001

int main(){
   
   SetConsoleOutputCP(UTF8_CODEPAGE); // somente Windows
   SetConsoleCP(UTF8_CODEPAGE); // somente Windows
   setlocale(LC_ALL, "pt_BR.UTF-8");  // Windows, Linux, Mac, etc...

   printf("Caracteres especiais são aceitos!\n");
   printf("Com codificação UTF-8 própria\n");
   printf("Exemplos aceitos: ã, á, ç, â");
   
   return EXIT_SUCCESS;
}