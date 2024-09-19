#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal, bonif, aux_esc, novosal;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &sal);

    if (sal <= 500.00) {
        bonif = sal * 0.05; 
    } else if (sal <= 1200.00) {
        bonif = sal * 0.12; 
    } else {
        bonif = 0.00; 
    }

    if (sal <= 600.00) {
        aux_esc = 150.00; 
    } else {
        aux_esc = 100.00; 
    }

    novosal = sal + bonif + aux_esc;

    printf("O novo salario, incluindo bonificacao e auxilio escola e: R$ %.2f\n", novosal);

    return 0;
}