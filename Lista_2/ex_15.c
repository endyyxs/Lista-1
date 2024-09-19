#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal_min, horas_trab, dep, horas_ext;
    float valor_htrab, salmes, valor_dep, valor_hext;
    float salbruto, imp_renda, sal_liq, grat;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &sal_min);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trab);
    printf("Digite o numero de dependentes: ");
    scanf("%f", &dep);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_ext);

    valor_htrab = sal_min / 5.0;
    salmes = horas_trab * valor_htrab;
    valor_dep = dep * 32.0;
    valor_hext = horas_ext * (valor_htrab * 1.5);

    salbruto = salmes + valor_dep + valor_hext;

    if (salbruto < 200.00) {
        imp_renda = 0.0;
    } else if (salbruto <= 500.00) {
        imp_renda = salbruto * 0.10; 
    } else {
        imp_renda = salbruto * 0.20;
    }

    sal_liq = salbruto - imp_renda;

    if (sal_liq <= 350.00) {
        grat = 100.00;
    } else {
        grat = 50.00;
    }

    printf("Salario do mes: %.2f\n", salmes);
    printf("Valor dos dependentes: %.2f\n", valor_dep);
    printf("Valor das horas extras: %.2f\n", valor_hext);
    printf("Salário bruto: %.2f\n", salbruto);
    printf("Imposto de Renda Retido na Fonte: %.2f\n", imp_renda);
    printf("Salário líquido: %.2f\n", sal_liq);
    printf("Gratificação: %.2f\n", grat);

    return 0;
}