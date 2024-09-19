#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 
    float n1, n2, resp1, resp2;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	printf("\nDigite outro numero: ");
	scanf("%f", &n2);
	
	resp1 = pow (n1, n2);
	resp2 = pow (n2, n1);
	printf("Resposta 1: %.2f\n",resp1);
	printf("Resposta 2: %.2f\n",resp2);
	
    return 0;
}
