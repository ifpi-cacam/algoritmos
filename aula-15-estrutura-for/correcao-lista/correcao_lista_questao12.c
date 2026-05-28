#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

#define UTF8_CODEPAGE 65001

float quant_kg_mor, quant_kg_mac; 
float valor_total_mor, valor_total_mac;
float total, total_kg, total_sem_desc;

int main(){
 
 SetConsoleOutputCP(UTF8_CODEPAGE); 
 SetConsoleCP(UTF8_CODEPAGE); 
 setlocale(LC_ALL, "pt_BR.UTF-8"); 
 
 printf("Digite a quantidade em quilos de morango: ");
 scanf("%f", &quant_kg_mor);

  printf("Digite a quantidade em quilos de maça: ");
  scanf("%f", &quant_kg_mac);

   if(quant_kg_mor<=5){
    valor_total_mor = 2.5*quant_kg_mor;
   }else{
     valor_total_mor = 2.2*quant_kg_mor;
   }

   if(quant_kg_mac<=5){
    valor_total_mac = 1.8*quant_kg_mac;
   }else{
     valor_total_mac = 1.5*quant_kg_mac;
   }

   total_kg = quant_kg_mor + quant_kg_mac;
   total_sem_desc = valor_total_mor + valor_total_mac;
   total = total_sem_desc;
   
   if((total_kg>8) || (total>25)){
        total = total_sem_desc - 0.10*total_sem_desc;
    }
   
    printf("Quantidade em kg de morango: %.2f\n", quant_kg_mor);
    printf("Quantidade em kg de mac: %.2f\n", quant_kg_mac);
    printf("Total em kg: %.2f", total_kg);
    printf("Valor RS total em morango: %.2f\n", valor_total_mor);
    printf("Valor RS total em maca: %.2f\n", valor_total_mac);
    printf("Valor RS total sem desconto: %.2f\n", total_sem_desc);
    printf("Valor total a ser pago pelo cliente: %.2f\n", total);


 return EXIT_SUCCESS;
}