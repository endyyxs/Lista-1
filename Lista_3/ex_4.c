#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, a, fat, num;

    printf("\nInsira o total de numeros a serem digitados\n");
    scanf("%d", &num);
    for(i = 1; i<=num; i++){
        printf("\n\n\nInsira um valor para o calculo do fatorial\n");
        scanf("%d", &a);
        fat = 1;
        for (j = a; j>=1; j--){
           fat = fat*j;
        }
      printf("\nValor de %d e: %d", a, fat);
   }
    return 0;
}

      
