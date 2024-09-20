#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod_est, cod_carga;
    float p_tonel, p_kg, p_porkg, p_carga, imp, valor_imp, vt;

    printf("Digite o codigo do estado de origem: ");
    scanf("%d", &cod_est);

    printf("Digite o peso da carga em toneladas: ");
    scanf("%f", &p_tonel);

    printf("Digite o codigo da carga: ");
    scanf("%d", &cod_carga);

    p_kg = p_tonel * 1000;

    if (cod_carga >= 10 && cod_carga <= 20) {
        p_porkg = 100.0;
    } else if (cod_carga >= 21 && cod_carga <= 30) {
        p_porkg = 250.0;
    } else if (cod_carga >= 31 && cod_carga <= 40) {
        p_porkg = 340.0;
    }

    p_carga = p_kg * p_porkg;

    switch (cod_est) {
        case 1:
            imp = 0.35;
            break;
        case 2:
            imp = 0.25;
            break;
        case 3:
            imp = 0.15;
            break;
        case 4:
            imp = 0.05;
            break;
        case 5:
            imp = 0.0; // Isento
            break;
    }

    valor_imp = p_carga * imp;
    vt = p_carga + valor_imp;

    printf("Peso da carga em kg: %.2f\n", p_kg);
    printf("Preço da carga: %.2f\n", p_carga);
    printf("Valor do imposto: %.2f\n", valor_imp);
    printf("Valor total transportado: %.2f\n", vt);

    return 0;
}