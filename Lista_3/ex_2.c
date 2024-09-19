#include <stdio.h>
#include <stdlib.h>

int main(){
    float soma = 1, fat;
    int n, i, j;

    printf("Digite o numero de iteracoes do somatorio: ");
    scanf("%d", &n);
    if (n >0){
        for(i = 2; i<=n; i++){ 
            fat=1;
            for(j = i; j>1;j--){
                fat = fat*j;  
                printf(" \nFatorial de %d= %.14f\n", i, fat);
                soma = soma + 1/fat;
                printf("\nResultado da soma = %.14f\n", soma);
                _sleep(1000);
            }    
       }
        printf("\n\nResultado Final da Soma = %.14f\n", soma);
    } else {
        printf("Digite um numero maior que 0");
    }

    return 0;
}
      
