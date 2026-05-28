#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

float n1, n2, n3;
int op;

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 
 
 printf("Digite op: "); scanf("%d", &op);
 printf("Digite n1: "); scanf("%f", &n1);
 printf("Digite n2: "); scanf("%f", &n2);
 printf("Digite n3: "); scanf("%f", &n3);

 switch(op){
    case 1: printf("%.2f", n1); break;
    case 2: printf("%.2f", n2); break;
    case 3: printf("%.2f", n3); break;
    default: printf("Opcao invalida"); break;
 }

 return EXIT_SUCCESS;
}