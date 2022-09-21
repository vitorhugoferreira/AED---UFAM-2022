#include <stdio.h>

int main() {
 unsigned int dimensao, l, c;
	
 scanf("%u%*c",&dimensao); // aqui lê a dimensão
	
	// agora escreva o código para imprimir a imagem
	// olha um exemplo do que pode ser feito pra imprimir uma imagem
	// com linha 0 e a última linha acesas	
	// dai complemente o exercício
	
 for( l=0; l < dimensao; l++) {
	
    for( c=0; c < dimensao; c++) {
		//primeiro if é para definir a a primeira e ultima linha preenchidas com 1
		if((l==0) || (l == dimensao-1)) {
		 printf("1");
		} 
		 //as outras condições precisam estar dentro de um "else" para que não atrapalhem o primeiro If
        else {
			  //segue a mesma logica, primeira e ultima coluna recebem somente o valor 1
            //é preciso colocar tudo dentro de um if para poder não haver conflito
            //para imprimir o x dentro da matriz, é só lembrar dos conceitos de matriz diagonal e secundária
            //diagonal principal = (linha == coluna) e diagonal secundária = (coluna == dimensao - 1 - l)
            //por algum motivo o codebench nao só aceita coluna == linha kkkk
            if((c == 0) || (c == dimensao - 1) || (c == l) || (c == dimensao - 1 - l)){
                printf("1");
            }
            else{
                printf("o"); //ficar atento que é a porra de um "o" e não um 0!!
            }
        }  
	}
    
	printf("\n"); // para mudar de linha
 }
}
