#include <stdio.h>

int main(){
    
    int temperatura;
    int maior = 0, menor = 0;
    int qtd = 0, qtdMaior = 0, qtdMenor = 0;
    int soma = 0;
    double mediaFinal = 0;
    
    while(scanf("%d", &temperatura), temperatura != 500){
        
        //definindo maior e o menor
        if(qtd == 0){
            maior = temperatura;
            menor = temperatura;
            
            qtdMaior = 1;
            qtdMenor = 1;
        }
        //incrementano os contadores maior e menor        
        else{
            if(temperatura == menor){
                qtdMenor++;
            }
            if(temperatura == maior){
                qtdMaior++;
            }  
        }
        //temperatura menor, atualiza e zera o contador
        if(temperatura < menor){
            menor = temperatura;
            qtdMenor = 1;
        }
        //temperatura maior, atualiza e zera o contador
        else if(temperatura > maior){
            maior = temperatura;
            qtdMaior = 1;
        }
        //temperatura comum, adiciona a soma
        qtd++;
        soma += temperatura;  
    }
    
    qtd -= (qtdMaior + qtdMenor);
    soma -= (qtdMaior * maior + qtdMenor * menor); //LEMBRAR QUE É MULTIPLICANDO 

    if(qtd > 0){
        mediaFinal = ((double) soma / qtd);
    }

    printf("%.1lf", mediaFinal);
}