#include <stdio.h>
#includd <stdlib.h>

int main() {
    float p_atual, v_media, novo_p;

    printf("Digite o preco atual do produto: ");
    scanf("%f", &p_atual);

    printf("Digite a venda media mensal do produto: ");
    scanf("%f", &v_media);

    if (v_media < 500) {
        if (p_atual < 30) {
            novo_p = p_atual * 1.10; 
        } else if (p_atual >= 30 && p_atual < 80) {
            novo_p = p_atual * 1.15; 
        } else {
            novo_p = p_atual * 0.80; 
        }
    } else if (v_media >= 500 && v_media < 1200) {
        if (p_atual < 30) {
            novo_p = p_atual * 1.10; 
        } else if (p_atual >= 30 && p_atual < 80) {
            novo_p = p_atual * 1.15; 
        } else {
            novo_p = p_atual; 
        }
    } else { 
        if (p_atual < 30) {
            novo_p = p_atual * 1.10; 
        } else if (p_atual >= 30 && p_atual < 80) {
            novo_p = p_atual * 1.15; 
        } else {
            novo_p = p_atual; 
        }
    }

    printf("Novo preco do produto: %.2f\n", novo_p);

    return 0;
}