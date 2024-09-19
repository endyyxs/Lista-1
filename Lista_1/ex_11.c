#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){ 
    float n, n_quad, n_cubo, r_quad, r_cubo;
	
	printf("Digite um numero: ");
	scanf("%f", &n);

	n_quad = pow(n,2);
	n_cubo = pow(n,3);
	r_quad = sqrt(n);
	r_cubo = powf(n, 1.0/3.0);

	printf("Numero ao quadrado: %.2f\n", r_quad);
	printf("Numero ao cubo: %.2f\n", r_cubo);
	printf("Raiz quadrada: %.2f\n", r_quad);
	printf("Raiz cubica: %.2f\n", r_cubo);
	
    return 0;
}

