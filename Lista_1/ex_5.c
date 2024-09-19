#include <stdio.h>
#include <stdlib.h>

int main(){ 
    float sal, perc, aumento, novosal;

    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &sal);

    printf("\nDigite o percentual do aumento: ");
    scanf("%f", &perc);

    aumento = sal * perc/100;

    printf("Valor do aumento: R$ %.2f\n", aumento);

    novosal = sal + aumento;

    printf("O novo valor do salario: R$ %.2f", novosal);

    return 0;
}
