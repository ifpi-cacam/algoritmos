void popularNotas(float v[5]){
    printf("Populando o vetor...\n");
    for(int x=0; x<5; x++){
        printf("Digite posicao %d: ", (x+1));
        scanf("%f", &v[x]);
    }
}

void mostrarNotas(float v[5]){
    printf("Mostrando o vetor...\n");
    for(int x=0; x<5; x++){
        printf("Valor da posicao %d: %.2f \n", (x+1), v[x]);
    }
}

float calcularMedia(float v[5]){
    printf("Calculando a média...\n");
    float soma = 0;
    for(int x=0; x<5; x++){
        soma = soma + v[x];
    }
    float media = soma/5;
    return media;
}

float calcularMaior(float v[5]){
    printf("Calculando o maior...\n");
    float maior = v[0];
    for(int x=1; x<5; x++){
        if(v[x]>maior){
            maior = v[x];
        }
    }
    return maior;
}

float calcularMenor(float v[5]){
    printf("Calculando o menor...\n");
    float menor = v[0];
    for(int x=1; x<5; x++){
        if(v[x]<menor){
            menor = v[x];
        }
    }
    return menor;
}
