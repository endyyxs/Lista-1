#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dia/mês/ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia/mês/ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 > ano2) {
        printf("A primeira data é mais recente: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (ano1 < ano2) {
        printf("A segunda data é mais recente: %d/%d/%d\n", dia2, mes2, ano2);
    } else {
        if (mes1 > mes2) {
            printf("A primeira data é mais recente: %d/%d/%d\n", dia1, mes1, ano1);
        } else if (mes1 < mes2) {
            printf("A segunda data é mais recente: %d/%d/%d\n", dia2, mes2, ano2);
        } else {
            if (dia1 > dia2) {
                printf("A primeira data é mais recente: %d/%d/%d\n", dia1, mes1, ano1);
            } else if (dia1 < dia2) {
                printf("A segunda data é mais recente: %d/%d/%d\n", dia2, mes2, ano2);
            } else {
                printf("As duas datas são iguais.\n");
            }
        }
    }

    return 0;
}
