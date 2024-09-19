#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4;

    printf("Digite tres numeros em ordem crescente:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("Digite um numero: ");
    scanf("%f",&n4);

    if (n4 > n3){
        printf("\nA ordem decrescente dos numeros: %.1f\t%.1f\t%.1f\t%.1f\t", n4, n3, n2, n1);
    } else if (n4 > n2 && n4 < n3) {
	    printf("\nA ordem decrescente dos numeros: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n4, n2, n1);
    } else if (n4 > n1 && n4 < n2) {
	    printf("\nA ordem decrescente dos numeros: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n2, n4, n1);
    } else {
	    printf("\nA ordem decrescente dos numeros: %.1f\t%.1f\t%.1f\t%.1f\t", n3, n2, n1, n4);
    }    

    return 0;
}
