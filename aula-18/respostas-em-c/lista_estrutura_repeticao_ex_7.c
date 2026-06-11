#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    Leia o salário de funcionários de uma empresa, calcule e escreva
    o novo salário (segundo os critérios descritos abaixo), a soma
    dos salários atuais, a soma dos salários reajustados e a diferença
    entre as duas somas.

    A condição de parada é salário = 0.

    Faixas de reajuste:

    De R$ 0,00      até R$ 2.999,99   -> 25%
    De R$ 3.000,00  até R$ 5.999,99   -> 20%
    De R$ 6.000,00  até R$ 9.999,99   -> 15%
    Acima de R$ 10.000,00             -> 10%
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float sal, novoSal, somaSal, somaNovoSal, difSoma;

    somaSal = 0;
    somaNovoSal = 0;

    do{

        printf("\n");
        printf("Digite o salario do empregado: ");
        scanf("%f", &sal);

        // O algoritmo só prosseguirá caso o
        // empregado tenha salário diferente de zero.
        // ZERO indica o fim da repetição.

        if(sal != 0){

            if(sal <= 2999){

                // acréscimo de 25%
                novoSal = sal + 0.25 * sal;

            }else{

                if(sal <= 5999){

                    // acréscimo de 20%
                    novoSal = sal + 0.20 * sal;

                }else{

                    if(sal <= 5999){

                        // acréscimo de 15%
                        novoSal = sal + 0.15 * sal;

                    }else{

                        // acréscimo de 10%
                        novoSal = sal + 0.10 * sal;
                    }
                }
            }

            somaSal = somaSal + sal;
            somaNovoSal = somaNovoSal + novoSal;

            printf("Novo salario: R$ %.2f\n", novoSal);
        }

    }while(sal != 0.0);

    // Calculando a diferença entre as duas somas

    difSoma = somaNovoSal - somaSal;

    // Mostrando os valores calculados
    // Verificar se pelo menos 1 salário foi computado

    if(somaSal != 0){

        printf("\n-------- Informacoes Gerais dos Salarios --------\n");
        printf("Soma dos salarios sem reajuste: R$ %.2f\n", somaSal);
        printf("Soma dos salarios com reajuste: R$ %.2f\n", somaNovoSal);
        printf("Diferenca entre as duas somas: R$ %.2f\n", difSoma);
    }

    return EXIT_SUCCESS;
}