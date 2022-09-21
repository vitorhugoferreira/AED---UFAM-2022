#include <stdio.h>
#include <stdlib.h>
#define tempo 3

/* Escrever aqui as structs e funções da fila usando lista simples */

//structs para No e Fila
typedef struct tipoNo TipoNo;
struct tipoNo{
    int info;
    TipoNo* prox;
}; 

typedef struct fila{
    TipoNo* inicio;
    TipoNo* final;
}Fila;

//Funcao criar fila

Fila* fila_cria(void){
    Fila* fila;

    fila = (Fila*) malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->final = NULL;
    
    return fila;
}

//Funcao para inserir valores na fila

void fila_insere(Fila* fila, int valor){
    TipoNo* no; 
    no = malloc(sizeof(TipoNo));
    no->info = valor;
    no->prox = NULL;

    if(fila->final != NULL){
        fila->final->prox = no;
    } 
    else{
        fila->inicio = no;
    } 
    fila->final = no;
}

//Funcao para retirar valores da fila

int fila_retira(Fila* fila){
    
    int valor;
    TipoNo* t;
    t = fila->inicio;
    valor = t->info;
    fila->inicio = t->prox;

    if(fila->inicio == NULL){
        fila->final = NULL;
    }

    free(t);

    return valor;
}

//Funcao para fila vazia

int fila_vazia(Fila* fila){
    return (fila->inicio == NULL);
}

int main(void){
    Fila* f = fila_cria();
    
    int processos; // digitar a quantidade de processos 
    scanf("%d",&processos);

    int p, i;              
    for (i=0; i<processos; i++){
        scanf("%d",&p); // tempo incial do processo p
        fila_insere(f, p); // esta entrada é um int
    }

    while( !fila_vazia(f) ){
        int x = fila_retira(f);
        p = x/10;
        int t = x%10;
        if (t>3)
            fila_insere(f, p*10+(t-tempo)); // inseire o processo com um novo número
        else
            printf("Processo %d concluido\n",p);
    }
    return 0;
}