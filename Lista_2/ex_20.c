#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod_prod, cod_pais;
    float pesokg, pesog, preco_porg, preco_total, imp, vt;

    printf("Digite o código do produto: ");
    scanf("%d", &cod_prod);

    printf("Digite o peso do produto em quilos: ");
    scanf("%f", &pesokg);

    printf("Digite o codigo do pais de origem: ");
    scanf("%d", &cod_pais);

    pesog = pesokg * 1000;

    if (cod_prod >= 1 && cod_prod <= 4) {
        preco_porg = 10;
    } else if cod_prod >= 5 && cod_prod <= 7) {
        preco_porg = 25;
    } else if cod_prod >= 8 && cod_prod <= 10) {
        preco_porg = 35;
    }

    preco_total = peso_g * preco_porg;

    if (cod_pais == 1) {
        imp = 0.0; 
    } else if (cod_pais == 2) {
        imp = preco_total * 0.15; 
    } else if (cod_pais == 3) {
        imp = preco_total * 0.25; 
    }

    vt = preco_total + imp;

    printf("Peso do produto em gramas: %.2f g\n", pesog);
    printf("Preço total do produto: %.2f\n", preco_total);
    printf("Valor do imposto: %.2f\n", imp);
    printf("Valor total: %.2f\n", vt);

    return 0;
}