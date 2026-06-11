#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 

 int x = 0;
 int n;
 printf("Digite um número inteiro: ");
 scanf("%d", &n);
 while(x<n){
    x = x+1;
    printf("%d ", x);
    if(x%2==0){
        break;
    }
 }
 printf("O primeiro número par menor que %d após o 0 é: %d", n, x);
 return EXIT_SUCCESS;
}