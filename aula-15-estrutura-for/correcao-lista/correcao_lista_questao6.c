#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

#define UTF8_CODEPAGE 65001

float x_1, y_1, x_2, y_2, d;
float y2;

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 
 
 printf("Digite x1: "); scanf("%f", &x_1);
 printf("Digite y1: "); scanf("%f", &y_1);
 printf("Digite x2: "); scanf("%f", &x_2);
 printf("Digite y2: "); scanf("%f", &y_2);

 d = sqrt(pow(x_2-x_1, 2) + pow(y_2-y_1, 2));

 printf("A distancia é: %.2f", d);
  
 return EXIT_SUCCESS;
}