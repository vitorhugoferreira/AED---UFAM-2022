#include <stdio.h>
#include <stdlib.h>

typedef struct info{
    char funcao;
    int matricula;
    float salario;
}info;

int main(void){
    info *novaP = malloc(sizeof(info));
    info *novaP2 = malloc(sizeof(info)); 
    char funcao;
    int matricula, acum1, acum2, tam1, tam2, i,j;
    float salario, aux, var;
    acum1 = 0;
    acum2 = 0;
    tam1 = 0; 
    tam2 = 0;
    aux = 0;

    while(scanf("%c", &funcao), funcao != 'F'){
        if(funcao == 'N'){
            novaP = realloc(novaP, (tam1 + 1) * sizeof(info));
            scanf(" %d %f", &matricula, &salario);
            novaP[acum1].funcao = funcao;
            novaP[acum1].matricula = matricula;
            novaP[acum1].salario = salario;
            acum1++;
            tam1++;
        }
        else if(funcao == 'A'){
            novaP2 = realloc(novaP2, (tam2+ 1) * sizeof(info));
            scanf(" %d %f", &matricula, &salario);
            novaP2[acum2].funcao = funcao;
            novaP2[acum2].matricula = matricula;
            novaP2[acum2].salario = salario;
            acum2++;
            tam2++;
        }
        
    }
    float vetN[tam1];
    float vetA[tam2]; 

    for(i = 0; i < tam1; i++){
        vetN[i] = novaP[i].salario;
    }
     for(i = 0; i < tam2; i++){
        vetA[i] = novaP2[i].salario;
    }

    for(i = 0; i < tam1 - 1; i++){
        for(j = i + 1; j < tam1; j++){
            if(vetN[i] > vetN[j]){
                    aux = vetN[i];
                    vetN[i] = vetN[j];
                    vetN[j] = aux;
            }
        }
    }
    
    for(i = 0; i < tam2 - 1; i++){
        for(j = i + 1; j < tam2; j++){
            if(vetA[i] > vetA[j]){
                    aux = vetA[i];
                    vetA[i] = vetA[j];
                    vetA[j] = aux;
            }
        }
    }

    if(tam2 % 2 == 0){ //tam2 = tamanho do adm
        printf("Administrativo:\n%.2f\n%.2f\n", vetA[tam2/2 - 1], vetA[tam2/2]);
    }
    else{
        printf("Administrativo:\n%.2f\n", vetA[(tam2 - 1)/2]);
    }

    if(tam1 % 2 == 0){ //tam1 = tamanho do nao adm
        //se for par
        printf("N Administrativo:\n%.2f\n%.2f\n", vetN[tam1/2 - 1], vetN[tam1/2]);
    }
    else{
        //se for impar
        printf("N Administrativo:\n%.2f\n", vetN[(tam1 - 1)/2]);
    }

}