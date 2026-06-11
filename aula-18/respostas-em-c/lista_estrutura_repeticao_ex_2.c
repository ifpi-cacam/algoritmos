#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    Uma determinada empresa armazena para cada funcionário uma ficha
    contendo o código, o número de horas trabalhadas e o seu número
    de dependentes.

    Considerando que a empresa paga R$ 12,00 por hora e R$ 40,00 por
    dependente e que sobre o salário são feitos descontos de 8,5%
    para o INSS e 5% para IR.

    Escreva um algoritmo que leia o código, número de horas trabalhadas
    e número de dependentes de N funcionários. Após a leitura de cada
    ficha, escreva os valores descontados para cada imposto e o salário
    líquido do funcionário.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, cod, ht, nd, N;
    float s, sl;
    float descontoINSS, descontoIR;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        printf("Digite o codigo do funcionario %d: ", i);
        scanf("%d", &cod);

        printf("Digite as horas trabalhadas do funcionario %d: ", i);
        scanf("%d", &ht);

        printf("Digite o numero de dependentes do funcionario %d: ", i);
        scanf("%d", &nd);

        // calcular o salario
        s = 12 * ht + 40 * nd;

        // calcular os descontos
        descontoINSS = (8.5 / 100.0) * s;
        descontoIR = (5.0 / 100.0) * s;

        // calcular o salario liquido (com descontos)
        sl = s - descontoINSS - descontoIR;

        printf("Desconto de INSS: R$ %.2f\n", descontoINSS);
        printf("Desconto de IR: R$ %.2f\n", descontoIR);
        printf("O salario liquido do empregado %d e: R$ %.2f\n\n", i, sl);
    }

    return EXIT_SUCCESS;
}