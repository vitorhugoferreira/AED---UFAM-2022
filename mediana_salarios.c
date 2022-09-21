#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa {
	char letra;
	int matricula;
	float salario;
} Pessoa;

int main() {

	Pessoa *p = malloc(sizeof(Pessoa));
	Pessoa *p2 = malloc(sizeof(Pessoa));
	
	char letra;
	int mat;
	float sal;
	int i=0;
	int f=0;
	int tam1 = 0;
	int tam2 =0;
	
	while(scanf("%c",&letra), letra!='F') {
		
		if(letra=='A') {
			p = realloc(p, (tam1+1)*sizeof(Pessoa));
			scanf("%d",&mat);
			scanf("%f",&sal);
			p[i].letra = letra;
			p[i].matricula = mat;
			p[i].salario = sal;
			tam1++;
			i++;

		} else if(letra=='N'){
			p2 = realloc(p2, (tam2+1)*sizeof(Pessoa));
			scanf("%d",&mat);
			scanf("%f",&sal);
			p2[f].letra = letra;
			p2[f].matricula = mat;
			p2[f].salario = sal;
			tam2++;
			f++;
		}
	}
	
	float vet1[tam1];
	float vet2[tam2];
	
	for(i=0; i<tam1; i++) {
		vet1[i]=p[i].salario;
	}
	
	for(i=0; i<tam2; i++) {
		vet2[i]=p2[i].salario;
	}
	
	float aux = 0;
	float temp;
	
	do { 
		aux = 0;
		for(i= 0; i < tam1-1; i++){ 
			if(vet1[i] > vet1[i+1]) { 
				temp = vet1[i];
				vet1[i] = vet1[i+1];
				vet1[i+1] = temp;
				aux = 1;
			}
		}
	} while(aux);
	
	do { 
		aux = 0;
		for(i= 0; i < tam2-1; i++){ 
			if(vet2[i] > vet2[i+1]) { 
				temp = vet2[i];
				vet2[i] = vet2[i+1];
				vet2[i+1] = temp;
				aux = 1;
			}
		}
	} while(aux);
	
	if(tam1%2 != 0) {
		printf("Administrativo:\n%.2f\n",vet1[(tam1-1)/2]);
		
	} else {
		printf("Administrativo:\n%.2f\n%.2f\n",vet1[tam1/2 - 1], vet1[tam1/2]); 
	}
	
	if(tam2%2 != 0) {
		printf("N Administrativo:\n%.2f\n",vet2[(tam2-1)/2]);
		
	} else {
		printf("N Administrativo:\n%.2f\n%.2f\n",vet2[tam2/2 - 1],vet2[tam2/2]);
	}

    return 0;
}