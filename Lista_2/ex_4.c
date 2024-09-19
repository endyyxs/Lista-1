#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3;

    printf("\nDigite o 1° numero: ");
    scanf("%f", &num1);

    printf("\nDigite o 2° numero: ");
    scanf("%f", &num2);

    printf("\nDigite o 3° numero: ");
    scanf("%f", &num3);

    if (num1 < num2 && num1 < num3) {
        if (num2 < num3) {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num1, num2, num3);
        } else {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num1, num3, num2);
        }
    } else if (num2 < num1 && num2 < num3) {
        if (num1 < num3) {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num2, num1, num3);
        } else {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num2, num3, num1);
        }
    } else if (num3 < num1 && num3 < num2) {
        if (num1 < num2) {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num3, num1, num2);
        } else {
            printf("\nA ordem crescente dos numeros: %.2f\t%.2f\t%.2f", num3, num2, num1);
        }
    }

    return 0;
}

