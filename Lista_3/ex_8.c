#include <stdio.h>
#include

int main() {
    int num, soma = 0, cont = 0, maior, menor, soma_p = 0, cont_p = 0, cont_imp = 0;
    char op;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;
        cont++;

        if (cont == 1) { 
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        if (num % 2 == 0) {
            soma_p += num;
            cont_imp++;
        } else {
            cont_imp++;
        }

        printf("Deseja digitar outro numero? (s/n): ");
        scanf(" %c", &op);

    } while (op == 's' || op == 'S');

    float media = (float)soma / cont;
    float media_p = (cont_p > 0) ? (float)soma_p / cont_p: 0;
    float perc_imp = (cont_imp > 0) ? (float)cont_imp / cont * 100 : 0;

    printf("\nResultados:\n");
    printf("Soma dos números digitados: %d\n", soma);
    printf("Quantidade de números digitados: %d\n", count);
    printf("Média dos números digitados: %.2f\n", media);
    printf("Maior número digitado: %d\n", maior);
    printf("Menor número digitado: %d\n", menor);
    printf("Média dos números pares: %.2f\n", media_p);
    printf("Percentagem dos números ímpares: %.2f\n", perc_imp);

    return 0;
}