#include <stdio.h>
#include<stdlib.h>

int main(){ 
    float horas_trab, valor_salmin, valor_horat, valor_sal_bru, imposto, valor_salliq;
	
	printf("Digite o total de horas trabalhadas: ");
	scanf("%f", &horas_trab);
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &valor_salmin);
	
    valor_horat =  valor_salmin / 2;
	valor_sal_bru = valor_horat * horas_trab;
	imposto = valor_sal_bru * 3 / 100;
	valor_salliq = valor_sal_bru - imposto;
	
	printf("\nO salario a receber: %.2f", valor_salliq);
	
    return 0;
}
