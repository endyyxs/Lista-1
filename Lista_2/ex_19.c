#include <stdio.h>
#include <stdlib.h>

int main() {
    float alt, p;

    printf("Digite a altura da pessoa: ");
    scanf("%f", &alt);

    printf("Digite o peso da pessoa: ");
    scanf("%f", &p);

    if (alt < 1.20) {
        if (p <= 60) {
            printf("A classificação da pessoa e: A");
        } else if (p > 60 && p <= 90) {
            printf("A classificação da pessoa e: D");
        } else {
            printf("A classificação da pessoa e: G");
        }
    } else if (alt >= 1.20 && alt <= 1.70) {
        if (p <= 60) {
            printf("A classificação da pessoa e: B");
        } else if (p > 60 && p <= 90) {
            printf("A classificação da pessoa e: E");
        } else {
            printf("A classificação da pessoa e: H");
        }
    } else { 
        if (p <= 60) {
            printf("A classificação da pessoa e: C");
        } else if (p > 60 && p <= 90) {
            printf("A classificação da pessoa e: F");
        } else {
            printf("A classificação da pessoa e: I");
        }
    }

    return 0;
}