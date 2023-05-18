#include <stdio.h>

int main () {
	
	int i, j, height;
	
	printf("Digite um numero de 2 a 20 para definir a altura da seta: ");
	scanf("%i", &height);
	
	for( i = 0 ; i < height + 1 ; i++) {
		
		printf(" ");
		
	}
		printf("*\n");
	
	//construcao parte de cima seta
	for(i = 0 ; i < height - 1 ; i++) {
		
		for(j = 0 ; j < height - i ; j++) {
			
			printf(" ");
			
		}
		for(j = 0 ; j < 3 + i * 2 ; j++) {
			
			printf("*");
		}
		
		printf("\n");
	}
	
	// base da seta
	for (i = 0 ; i < height ; i++) {
		
		for(j = 0 ; j < height + 1 ; j++ ){
				printf(" ");
			
		}
		
		printf("*\n");
	}
	
	
	
	
	
	return 0;
}