#include <stdio.h>
#include <stdlib.h>

int main(){ 
    float dep, taxa, rendim, total;

    printf("Digite o valor do deposito: \n");
    scanf("%f", &dep);

    printf("Digite a taxa de juros: \n");
    scanf("%f", &taxa);

    rendim = dep * taxa/100;
    total = dep + rendim;

    printf("Rendimento = R$ %.2f\n", rendim);
    printf("Total = R$ %.2f\n", total);

    return 0;
}

