#include <stdio.h>
#include<stdlib.h>

int main(){ 
    float peso_saco, racao_gato1, racao_gato2, total_final;
	
	printf("Digite o peso do saco de racao (Kg): ");
	scanf("%f", &peso_saco);
	
	printf("\nDigite a ra‡ao consumida pelo 1° gato (g):");
	scanf("%f", &racao_gato1);
	
	printf("\nDigite a ra‡ao consumida pelo 2° gato (g):");
	scanf("%f", &racao_gato2);
	
	racao_gato1 = racao_gato1 / 1000;
	racao_gato2 = racao_gato2 / 1000;
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
	
	printf("\nTotal de racao restante: %.2f Kg", total_final);
	
    return 0;
}
