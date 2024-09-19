#include <stdlib.h>
#include<stdio.h>

int main(){ 
    float sal, novosal;
  
    printf("Digite o salario do funcionario: ");
    scanf("%f",&sal);
    
    novosal = sal + (sal * 25/100);

    printf("O novo salario: %.2f", novosal);
  
    return 0;
}
