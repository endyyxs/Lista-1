#include <stdio.h>
#include <stdlib.h>

int main() {
    double N, k, ant;
    int i = 0;

    printf("Digite um numero para calcular a raiz quadrada: ");
    scanf("%lf", &N);

    k = 1.0;

    do {
        ant = k;
        k = (k + N / k) / 2.0;
        i++;
    } while ((k - ant) > 0.000001 || (ant - k) > 0.000001); 

    printf("A raiz quadrada aproximada de %.6lf: %.6lf\n", N, k);
    printf("Numero de iterações: %d\n", i);

    return 0;
}