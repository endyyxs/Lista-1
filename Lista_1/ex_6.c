#include<stdlib.h>
#include<stdio.h>

int main(){ 
    float sal, salreceber, gratific, imposto;

    printf("\nDigite o salario: ");
    scanf("%f", &sal);

    gratific = sal * 5/100;
    imposto = sal * 7/100;
    salreceber = sal + gratific - imposto;

    printf("\nSalario para receber: %.2f", salreceber);

    return 0;
}

