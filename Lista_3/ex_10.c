#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int votosnulos = 0, votosbrancos = 0;
    char op;

    do {
        printf("Digite seu voto (1 a 4 para candidatos, 5 para nulo, 6 para branco): ");
        scanf("%d", &voto);

        switch(voto) {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBrancos++;
                break;
            default:
                printf("Voto inválido!\n");
        }

        printf("Deseja continuar votando? (s/n): ");
        scanf(" %c", &op);

    } while (op == 's' || op == 'S');

    printf("\nResultado da eleição:\n");
    printf("Candidato 1: %d votos\n", c1);
    printf("Candidato 2: %d votos\n", c2);
    printf("Candidato 3: %d votos\n", c3);
    printf("Candidato 4: %d votos\n", c4);
    printf("Votos nulos: %d\n", votosnulos);
    printf("Votos em branco: %d\n", votosbrancos);

    return 0;
}