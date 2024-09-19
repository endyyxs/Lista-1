#include <stdio.h>
#include <math.h>  

int main() {
    int op;
    float n1, n2, resultado;

    printf("Menu de opções:\n");
    printf("1 - Somar dois números\n");
    printf("2 - Raiz quadrada de um número\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &n1);
            printf("Digite o segundo número: ");
            scanf("%f", &n2);

            resultado = n1 + n2;
            printf("A soma de %.2f e %.2f é: %.2f\n", n1, n2, resultado);
            break;

        case 2:
            printf("Digite um número: ");
            scanf("%f", &n1);

            if (n1 < 0) {
                printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
            } else {
                resultado = sqrt(n1);
                printf("A raiz quadrada de %.2f é: %.2f\n", n1, resultado);
            }
            break;

        default:
            printf("Opção inválida. Por favor, selecione 1 ou 2.\n");
            break;
    }

    return 0;
}
