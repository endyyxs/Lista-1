#include <stdio.h>
#include <stdlib.h>

int main() {
    double x, termo, cos, fatorial;
    int n, i;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);

    cos = 1.0;
    termo = 1.0;
    n = 10;

    for (i = 1; i < n; i++) {
        fatorial = 1;
        for (int j = 1; j <= 2 * i; j++) {
            fatorial *= j;
        }

        termo *= -x * x / (fatorial);

        cos += termo;
    }

    printf("O valor aproximado de cos(%.2lf) é: %.6lf\n", x, cos);

    return 0;
}