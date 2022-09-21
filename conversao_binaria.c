#include <stdio.h>

void bin(unsigned numero){
	
	if(numero == 0){
		
		printf("%d", numero);
		
	}else{
		
		bin(numero / 2);
		printf("%d", numero % 2);
			
	}
}

int main(){
	
	int numero;
	
	scanf("%d", &numero);
	
	bin(numero);
		
}