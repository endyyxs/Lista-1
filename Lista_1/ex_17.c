#include <stdio.h>
#include<stdlib.h>

int main(){ 
    float salario, c1, c2, cpmf1, cpmf2, saldo;
	
	printf("Digite o sal rio recebido: ");
	scanf("%f", &salario);
	
	printf("Digite o valor do 1° cheque: ");
	scanf("%f", &c1);
	
	printf("Digite o valor do 2° cheque: ");
	scanf("%f", &c2);
	
	cpmf1 = c1 * 0.38 / 100;
	cpmf2 = c2 * 0.38 / 100;
	
	saldo = salario - c1 - c2 - cpmf1 - cpmf2;
	printf("\nValor do saldo: %.2f", saldo);
	
    return 0;
}
