#include <stdio.h>


int main(){

    int temperatura;
    int contador = 0;
    int vetor[contador];

    int maior, menor;
    int i;
    int elementos = 0;
    int soma = 0;
    double mediaFinal;
    

    scanf("%d", &temperatura);
    vetor[contador] = temperatura;

    while(temperatura != 500){
        scanf("%d", &temperatura);
        contador++;
        vetor[contador] = temperatura;
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 1; i < contador; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    for(i = 0; i < contador; i++){
        if(vetor[i] != maior && vetor[i] != menor){
            soma += vetor[i];
            elementos++;
        }
    }

    if(elementos == 0){
        mediaFinal = 0;
        printf("%.1lf", mediaFinal);
    }else{
        mediaFinal = (double) ((double)soma / (double)elementos);
    
        printf("%.1lf", mediaFinal);
    }

    /*for(i = 0; i < contador; i++){
        soma += vetor[i];
    }*/

    

}