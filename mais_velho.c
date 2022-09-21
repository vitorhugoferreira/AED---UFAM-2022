#include <stdio.h>

int main(){

    int tamanho;
    int vetor[tamanho];

    int i;
    int maior;
    //ler o tamanho do vetor

    scanf("%d", &tamanho);

    //preenchendo o vetor com as idades

    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    //definindo o primeiro elemento do vetor como o maior

    maior = vetor[0];

    //comparando o maior com o resto do vetor e achando de fato o maior
    // o i deve começar em 1

    for(i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    //printando o maior elemento antes das ocorrencias
    printf("Idade: %d\n", maior);
    printf("Alun*(s): ");

    //identificando e printando as posicoes do maior elemento no vetor

    for(i = 0; i < tamanho; i++){
        if(vetor[i] == maior){
            printf("%d ", i + 1);
        }
    }

}