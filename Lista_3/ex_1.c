#include <stdio.h>
#include <stdlib.h>

int main(){
    float sal = 1000, perc = 1.5;
    int i, ano_atual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
      
    for (i = 2006; i <= ano_atual; i++){
        if (i==2006){
            sal = sal + (sal * perc)/100;
            printf("Salario em 2006 = %.2f \n\n", sal);
        } else {
            perc = (2 * perc);
            sal = sal + perc/100 * sal;
            printf("Percentual acumulado de aumento foi igual a %.2f\n",perc );
            printf("Salario em %d foi igual a %.2f\n\n", i,sal);
        }
    } 
    return 0;
}
