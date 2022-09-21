#include <stdio.h>
#include <stdlib.h>

typedef struct tipoNo tipoNo;

typedef struct aviao{
    char nome[4]; 
    int numero;
}Aviao;

struct tipoNo{
    Aviao info;
    tipoNo* prox;
}; 

typedef struct fila{
    tipoNo* inicio;
    tipoNo* final;
    int quant;
}Fila;

Fila* fila_cria(){
    Fila* fila; 
    fila = (Fila*) malloc(sizeof(Fila));

    if(fila != NULL){
        fila->inicio = NULL;
        fila->final = NULL;
        fila->quant = 0;
    }

    return fila;
} 

void filaLibera(Fila* fila){
    tipoNo* q;
    while(fila->inicio != NULL){
        q = fila->inicio;
        fila->inicio = fila->inicio->prox;
        free(q); 
    }
    free(fila);
}

int fila_insere(Fila* fila, Aviao valor){
    if(fila == NULL){
        return 0;
    }
    tipoNo* no = (tipoNo*) malloc(sizeof(tipoNo));
    if(no == NULL){
        return 0;
    }
    no->info = valor;
    no->prox = NULL;
    if(fila->final == NULL){
        fila->inicio = no;
    } 
    else{
        fila->final->prox = no;
    } 
    fila->final = no;
    fila->quant++;
    return 1;
}

int fila_retira(Fila* fila){
    tipoNo* t = fila->inicio;
    fila->inicio = fila->inicio->prox;
    if(fila->inicio == NULL){
        fila->final = NULL;
    }
    free(t);
    fila->quant--;
    return 1;
}

int fila_vazia(Fila* fila){
    if(fila == NULL){
        return 1;
    } 
    if(fila->inicio == NULL){
        return 1;
    } 
    return 0;
}

int tamanhoFila(Fila* fila){
    if(fila == NULL){
        return 0;
    } 
    return fila->quant;
}

void imprime(Aviao valor){
    printf("%s %d\n", valor.nome, valor.numero);
}

void imprimePrim(Fila* fila){
    printf("%s %d\n", fila->inicio->info.nome, fila->inicio->info.numero);
}

void imprimeFila(Fila *fila){
    tipoNo* no; 
    no = fila->inicio;
    while(no != NULL){
        imprime(no->info);
        no = no->prox;
    }
}
int main(void){
    char opcao; 
    Aviao v;
    Fila *novaFila = fila_cria();

    while(scanf("%c", &opcao), opcao != 'S'){
        switch(opcao){
            case 'A':
                scanf("%s", v.nome);
                scanf("%d", &v.numero);
                fila_insere(novaFila, v);
                break;
            case 'Q':
                printf("\n%d\n", tamanhoFila(novaFila));
                break;
            case 'L':
                imprimeFila(novaFila);
                break;
            case 'P':
                imprimePrim(novaFila);
                break;
            case 'D':
                fila_retira(novaFila);
                break;
        }   
    }
    filaLibera(novaFila);
    return 0;

}