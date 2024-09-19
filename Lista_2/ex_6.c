#include <stdio.h>
#include<stdlib.h>

int main(){
    int n, resto;

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    resto = n % 2;

    if (resto == 0)
	    printf("\nO numero digitado e par.");
    else
	    printf("\nO numero digitado e impar.");

    return 0;
}
