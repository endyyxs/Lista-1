#include <stdio.h>
#include<stdlib.h>

int main(){ 
    float preco_fab, perc_d, perc_imp, valor_dist, valor_imp, preco_final;
	
	printf("Digite o preco de fabrica: ");
	scanf("%f", &preco_fab);
	
	printf("Digite o percentual de lucro do distribuidor: ");
	scanf("%f", &perc_d);
	
	printf("Digite o percentual de imposto: ");
	scanf("%f", &perc_imp);
	
	valor_dist = preco_fab * perc_d / 100;
	valor_imp  = preco_fab * perc_imp / 100;
	preco_final = preco_fab + valor_dist + valor_imp;
	
	printf("Lucro do distribuidor: %.2f\n", valor_dist);
	printf("Valor do imposto: %.2f", valor_imp);
	printf("Preco final do veiculo: %.2f", preco_final);
	
    return 0;
}
