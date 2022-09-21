#include <stdio.h>

int main(){

    int temperatura;

    int maior = 0, menor = 0;
    int qtdMaior = 0, qtdMenor = 0, qtd = 0;

    int soma = 0;
    double mediaFinal = 0;

    while(scanf("%d", &temperatura), temperatura != 500){

        // Setting maior and menor
        if (qtd == 0){
            maior = temperatura;
            menor = temperatura;
            qtdMaior = 1;
            qtdMenor = 1;
        }
        
        // Increasing maior e menor
        else {
            if (temperatura == menor) { 
                qtdMenor++;
            }
            if (temperatura == maior) {
                qtdMaior++;
            }
        }
        

        // Temperatura menor, atualiza e zera o contador
        if (temperatura < menor) {
            menor = temperatura;
            qtdMenor = 1;
        } 
        // Temperatura maior, atualiza e zera o contador
        else if (temperatura > maior) {
            maior = temperatura;
            qtdMaior = 1;
        } 
        
        // Temperatura comum, adiciona na soma
        qtd++;
        soma += temperatura;

    }

    // printf("\\out of while\n\n");
    // printf("qtdMenor: %d | qtdMaior: %d | qtd: %d\n", qtdMenor, qtdMaior, qtd);
    // printf("menor: %d | maior: %d | soma: %d\n\n", menor, maior, soma);

    qtd -= (qtdMaior + qtdMenor);
    soma -= (qtdMaior * maior + qtdMenor * menor);

    if (qtd > 0){
        // printf("qtd: %d\n", qtd);
        // printf("soma: %d\n", soma);
        mediaFinal = ((double) soma / qtd);
    }

    // printf("\nMaior: %d\nMenor: %d", maior, menor);
    // printf("\nMedia: %.1f", mediaFinal);
    printf("%.1f", mediaFinal);

}