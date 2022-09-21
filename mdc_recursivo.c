#include<stdio.h>

int mdc(int x, int y)
{
	int resto;

	do{

		resto = x % y;

		x = y;

		y = resto;
		
	}while(resto != 0);

	return x;
}
int main()
{
   	int x, y;
	scanf("%d %d", &x, &y);
   	printf("%d", mdc(x, y));
 	return 0; 

}