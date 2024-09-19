#include <stdio.h>
#include <stdlib.h>

int main() {
    int op;
    float sal, imp, novosal;

    printf("Menu de opcoes:\n");
    printf("1 – Imposto\n");
    printf("2 – Novo Salario\n");
    printf("3 – Classificacao\n");
    printf("Digite a opcao desejada -> ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Digite o salario do funcionario: ");
            scanf("%f", &sal);

            if (sal < 500.00) {
                imp = sal * 0.05; 
            } else if (salario <= 850.00) {
                imp = sal * 0.10; 
            } else {
                imp = sal * 0.15; 
            }

            printf("O valor do imposto e: %.2f\n", imposto);
            break;

        case 2:
            printf("Digite o salario do funcionario: R$ ");
            scanf("%f", &sal);

            if (sal > 1500.00) {
                novosal = sal + 25.00;
            } else if (sal >= 750.00) {
                novosal = sal + 50.00; 
            } else if (sal >= 450.00) {
                novosal = sal + 75.00; 
            } else {
                novosal = sal + 100.00;
            }

            printf("Novo salario: R$ %.2f\n", novosal);
            break;

        case 3:
            printf("Digite o salario do funcionario: ");
            scanf("%f", &sal);

            if (sal <= 700.00) {
                printf("Classificacao: Mal remunerado\n");
            } else {
                printf("Classificacao: Bem remunerado\n");
            }
            break;

        default: 
            printf("Opcao invalida! Por favor, escolha outra opcao.\n");
            break;
    }

    return 0;
}