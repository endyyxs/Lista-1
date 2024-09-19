#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod;
    float salatual, aumento = 0, novosal;

    printf("Digite o codigo do cargo do funcionario: ");
    scanf("%d", &cod);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salatual);

    switch(cod) {
        case 1:
            aumento = salatual * 0.50; 
            printf("Cargo: Escriturario\n");
            break;
        case 2:
            aumento = salatual * 0.35;
            printf("Cargo: Secretario\n");
            break;
        case 3:
            aumento = salatual * 0.20;
            printf("Cargo: Caixa\n");
            break;
        case 4:
            aumento = salatual * 0.10; 
            printf("Cargo: Gerente\n");
            break;
        case 5:
            aumento = 0;
            printf("Cargo: Diretor\n");
            break;
        default:
            printf("Código invalido!\n");
            return 1;
    }

    
    novosal = salatual + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novosal);

    return 0;
}