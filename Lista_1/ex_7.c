#include <stdio.h>
#include<stdlib.h>

int main(){ 
    float sal, salreceber, imposto;

    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &sal);

    imposto = sal * 10/100;
    salreceber = sal + 50 - imposto;

    printf("\nSalario para receber = %.2f", salreceber);

    return 0;
}

