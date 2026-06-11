#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<stdbool.h>

#define UTF8_CODEPAGE 65001

/*
    Enunciado:

    Leia informações de alunos (matrícula, nota1, nota2, nota3)
    com o fim das informações indicado por matrícula = 0.

    Para cada aluno deve ser calculada a média final de acordo
    com a seguinte fórmula:

    Média Final = ((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10

    Se a média final for igual ou superior a 7, o aluno está aprovado;
    se a média final for inferior a 7, o aluno está reprovado.

    Ao final devem ser mostrados:
    - o total de aprovados;
    - o total de reprovados;
    - o total de alunos da turma;
    - a média da turma.
*/

int main(){

    SetConsoleOutputCP(UTF8_CODEPAGE);
    SetConsoleCP(UTF8_CODEPAGE);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int mat, nAlunos, nAp, nEf, nRep;
    float media, mGeral, soma, n1, n2, n3;

    nAlunos = 0;
    nAp = 0;
    nEf = 0;
    nRep = 0;
    soma = 0;

    do{

        printf("\n");
        printf("Digite a matricula do aluno: ");
        scanf("%d", &mat);

        // Só serão lidas as outras informações caso
        // o aluno tiver matrícula diferente de zero.
        // ZERO indica o fim da repetição.

        if(mat != 0){

            nAlunos = nAlunos + 1;

            printf("Digite a primeira nota do aluno %d: ", nAlunos);
            scanf("%f", &n1);

            printf("Digite a segunda nota do aluno %d: ", nAlunos);
            scanf("%f", &n2);

            printf("Digite a terceira nota do aluno %d: ", nAlunos);
            scanf("%f", &n3);

            // Cálculo da Média Ponderada
            media = ((2 * n1) + (3 * n2) + (5 * n3)) / 10;

            // Acumulando a média para cálculo da média geral
            soma = soma + media;

            // Determinando a situação do aluno

            if(media >= 7){

                printf("Aluno %d APROVADO com média %.2f\n",
                       nAlunos, media);

                nAp = nAp + 1;

            }else{

                if(media >= 4){

                    printf("Aluno %d EM EXAME FINAL com média %.2f\n",
                           nAlunos, media);

                    nEf = nEf + 1;

                }else{

                    printf("Aluno %d REPROVADO com média %.2f\n",
                           nAlunos, media);

                    nRep = nRep + 1;
                }
            }
        }

    }while(mat != 0);

    // Calcular a média final e mostrar as informações da turma

    if(nAlunos > 0){

        printf("\n-------- Informacoes Gerais da Turma --------\n");

        printf("Total de alunos da turma: %d\n", nAlunos);
        printf("Total de alunos aprovados: %d\n", nAp);
        printf("Total de alunos em exame final: %d\n", nEf);
        printf("Total de alunos reprovados: %d\n", nRep);

        mGeral = soma / nAlunos;

        printf("Media geral da turma: %.2f\n", mGeral);
    }

    return EXIT_SUCCESS;
}