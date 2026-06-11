#include <stdio.h>
#include <stdlib.h>

/**
Exemplo de comando de repetição While.

Este programa simula uma votação simples.

Opções:
1 - Candidato A
2 - Candidato B
0 - Encerrar votação

Ao final, o programa mostra a quantidade
de votos de cada candidato.
*/

int main() {

    int voto;
    int votosA = 0;
    int votosB = 0;

    printf("=== SISTEMA DE VOTACAO ===\n");
    printf("1 - Candidato A\n");
    printf("2 - Candidato B\n");
    printf("0 - Encerrar\n\n");

    printf("Digite seu voto: ");
    scanf("%d", &voto);

    while (voto != 0) {

        if (voto == 1) {
            votosA++;
        }
        else if (voto == 2) {
            votosB++;
        }
        else {
            printf("Voto invalido!\n");
        }

        printf("Digite seu voto: ");
        scanf("%d", &voto);
    }

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Candidato A: %d voto(s)\n", votosA);
    printf("Candidato B: %d voto(s)\n", votosB);

    system("PAUSE");
    return 0;
}