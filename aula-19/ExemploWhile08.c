#include <stdio.h>
#include <stdlib.h>

/**
Exemplo de comando de repetição While.

Este programa calcula uma aproximação
para a raiz quadrada de 10 utilizando
um método simples de tentativa e erro.

Começamos com o valor 3 e vamos
incrementando 0,001 até encontrar
um número cujo quadrado seja próximo de 10.

Observação:
A raiz quadrada de 10 é aproximadamente
3,16227766...
*/

int main() {

    double valor = 3.0;
    double incremento = 0.001;

    while (valor * valor < 10.0) {
        valor = valor + incremento;
    }

    printf("Raiz quadrada aproximada de 10: %.3lf\n", valor);
    printf("Quadrado do valor encontrado: %.6lf\n", valor * valor);

    system("PAUSE");
    return 0;
}