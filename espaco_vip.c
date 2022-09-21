#include <stdio.h>
#include <string.h>

int main(){

    //custo da lancha == 1000000
    //semanas = investimentoInicial / (receita - despesas)

    //Viagem Parintins = 446km (10 reais por KM) * 2 (ida e volta) = 8920 (multiplica por 2 ou 3)
    //Viagem Coari = 451km (10 reais por KM) * 2 (ida e volta) = 9020 (multiplica por 2 ou 3)

    //Receita Parintins 2x = (64*200) + (13*400) = 12800 + 5200 = 18000 (multiplica por 2) (MULTIPLICA PRECO DA PASSAGEM POR 2)
    //Receita Parintins 3x = (42*200) + (12*400) = 8400 + 4800 = 13200 (multiplica por 3) (MULTIPLICA PRECO DA PASSAGEM POR 2)

    //Receita Coari 2x = (60*200) + (16*400) = 12000 + 6400 =  18400 (multiplica por 2) (MULTIPLICA PRECO DA PASSAGEM POR 2)
    //Receita Coari 3x = (52*200) + (11*400) = 10400 + 4800 = 14800 (multiplica por 3) (MULTIPLICA PRECO DA PASSAGEM POR 2)

    char cidade[10];
    int viagens;
    int semanas, receita, despesas;

    scanf("%s", &cidade);
    scanf("%d", &viagens);

    //funcao que compara a entrada com a palavra especificada
    if(strcmp(cidade, "Parintins") == 0){
        if(viagens == 3){
            receita = 13200 * 3;
            despesas =  8920 * 3;
            semanas = 1000000 / (receita - despesas);
            printf("%d semana(s)", semanas);
        }
        //nao esquecer de usar else if para poder funcionar corretamente
        else if(viagens == 2){
            receita = 18000 * 2;
            despesas = 8920 * 2;
            semanas = 1000000 / (receita - despesas);
            printf("%d semana(s)", semanas);
        }
    }
    else if(strcmp("Coari", cidade) == 0){
        if(viagens == 3){
            receita = 14800 * 3;
            despesas = 9020 * 3;
            semanas = 1000000 / (receita - despesas);
            printf("%d semana(s)", semanas);
        }
        else if(viagens == 2){
            receita = 18400 * 2;
            despesas = 9020 * 2;
            semanas = 1000000 / (receita - despesas);
            printf("%d semana(s)", semanas);
        }
    }
    //caso seja outra cidade alem das duas especificadas, retornar destino desconhecido
    else{
        printf("destino desconhecido");
    }
}