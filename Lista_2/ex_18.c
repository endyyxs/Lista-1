#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, z;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y:");
    scanf("%f", &y);
    printf("Digite o valor de z: ");
    scanf("%f", &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("E um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("E um triangulo isosceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triangulo.\n");
    }

    return 0;
}