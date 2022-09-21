#include <stdio.h>

int somando(int numero){
	
	if(numero == 1){
		return 1;
	}else{
		return (numero + somando(numero - 1)); 
	}
}

int main(){
	
	int numero;
	
	scanf("%d", &numero);
	
	printf("%d", somando(numero));
	
}