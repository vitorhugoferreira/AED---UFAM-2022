#include <stdio.h>

int main(){

    int tamanho;
    
    scanf("%d", &tamanho);

    int  vetor[tamanho];

    int i;

    int contador = 0;

    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    int maiorIdade;

    maiorIdade = vetor[0];

    for(i = 1; i < tamanho; i++){
        if(vetor[i] >= maiorIdade){
            maiorIdade = vetor[i];
        }
    }

    printf("Idade: %d", maiorIdade);
    printf("\nAlun*(s): ");

    for(i = 0; i < tamanho; i++){
        if(maiorIdade == vetor[i]){
            printf("%d ", i + 1);
        }
    }

    
}