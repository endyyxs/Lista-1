#include <stdio.h>
#include <stdlib.h>

int main() {
    int I;
    float A, B, C, temp;

    printf("Digite um valor inteiro (1, 2 ou 3) para I: ");
    scanf("%d", &I);
    
    if (I < 1 || I > 3) {
        printf("Valor de I inválido. Insira 1, 2 ou 3.\n");
        return 1;
    }

    printf("Digite o valor para A: ");
    scanf("%f", &A);

    printf("Digite o valor para B: ");
    scanf("%f", &B);

    printf("Digite o valor para C: ");
    scanf("%f", &C);

    if (I == 1) {
        if (A > B) {
            temp = A;
            A = B;
            B = temp;
        }
        if (A > C) {
            temp = A;
            A = C;
            C = temp;
        }
        if (B > C) {
            temp = B;
            B = C;
            C = temp;
        }
        printf("\nA ordem crescente dos números: %.2f\t%.2f\t%.2f\n", A, B, C);
    } else if (I == 2) {
        if (A < B) {
            temp = A;
            A = B;
            B = temp;
        }
        if (A < C) {
            temp = A;
            A = C;
            C = temp;
        }
        if (B < C) {
            temp = B;
            B = C;
            C = temp;
        }
        printf("\nA ordem decrescente dos números: %.2f\t%.2f\t%.2f\n", A, B, C);
    } else if (I == 3) {
        float maior, menor, meio;

        if (A > B && A > C) {
            maior = A;
            if (B > C) {
                meio = B;
                menor = C;
            } else {
                meio = C;
                menor = B;
            }
        } else if (B > A && B > C) {
            maior = B;
            if (A > C) {
                meio = A;
                menor = C;
            } else {
                meio = C;
                menor = A;
            }
        } else {
            maior = C;
            if (A > B) {
                meio = A;
                menor = B;
            } else {
                meio = B;
                menor = A;
            }
        }

        printf("\nO maior número entre os outros dois: %.2f\t%.2f\t%.2f\n", menor, maior, meio);
    }

    return 0;
}
