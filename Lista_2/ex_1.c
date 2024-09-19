#include <stdlib.h>
#include <stdio.h>

int main(){ 
    float tl, as, ef, mediap;

    printf("Digite a nota do trabalho de laboratorio:");
    scanf("%f", &tl);

    printf("Digite a nota da Avaliacao Semestral:");
    scanf("%f", &as);

    printf("Digite a nota do Exame Final:");
    scanf("%f", &ef);

    mediap = ((tl*2) + (as*3) + (ef*5))/10;

    printf("Media ponderada: %.1f\n", mediap);

    if (mediap >= 0 && mediap < 5){
        printf("\nO conceito desse aluno e E.");
    }else if (mediap >= 5 && mediap < 6){
       printf("\nO conceito desse aluno e D.");
    }else if (mediap >= 6 && mediap < 7){
        printf("\nO conceito desse aluno e C.");
    }else if (mediap >= 7 && mediap < 8){
        printf("\nO conceito desse aluno e B.");
    }else 
        printf("\nO conceito deste aluno e A.");

    return 0;
}

