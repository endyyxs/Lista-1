#include <stdio.h>
#include<stdlib.h>

int main(){ 
    int ano_atual, ano_nasc, id_atual, id_2050;
  
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);
	
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano_atual);
	
	id_atual = ano_atual - ano_nasc;
	id_2050 = 2050 - ano_nasc;
	
	printf("Idade atual: %d\n", id_atual);
	printf("Idade em 2050: %d", id_2050);
	
    return 0;
}

