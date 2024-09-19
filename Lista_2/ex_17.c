#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("O coeficiente a deve ser diferente de zero.\n");
        return 1; 
    }

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Existe apenas uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}