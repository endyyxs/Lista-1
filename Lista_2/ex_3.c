#include <stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;

    printf("\nDigite o 1° numero: ");
    scanf("%d", &n1);

    printf("\nDigite o 2° numero: ");
    scanf("%d", &n2);

    if (n1 > n2){
	    printf("\nO maior numero: %d", n1);
    } else if (n2 > n1){
		printf("\nO maior numero: %d", n2);
    } else {
        printf("\nOs dois numeros sao iguais");
    }

    return 0;
}
