#include <stdio.h>

int main()
{   
    float num;
    
	printf("digite um numero para descobrir se ele eh positivo, negativo ou nulo: ");
	scanf("%f", &num);
	
	if( num == 0)
	{
		printf("este numero eh um numero NULO!");
	}
	else if(num > 0)
	{
		printf("este numero eh um numero POSITIVO!");
	}
	else
	{
		printf("este numero eh um numero NEGATIVO!");
	}
	
return 0;	
}
	
		