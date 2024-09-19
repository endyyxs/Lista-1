#include<stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){ 
    float pes, pol, jardas, milhas;
	
	printf("\nDigite uma medida em pes: ");
	scanf("%f", &pes);

	pol = pes * 12;
	jardas = pes / 3;
	milhas = jardas / 1760;
	
	printf("Em polegadas: %.2f\n", pol);
	printf("Em jardas: %.2f\n", jardas);
	printf("Em milhas: %.2f\n", milhas);
	
	return 0;
}											

