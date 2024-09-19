#include<stdlib.h>
#include<stdio.h>
 
int main(){
    float nota1, nota2, nota3, media, nota_exame;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nMedia aritmetica: %.2f", media);
    
    if (media >= 0 && media < 3)
	    printf("\nReprovado");
    if (media >= 3 && media < 7){
		nota_exame = 12 - media;
		printf("\nDeve tirar nota %.2f para ser aprovado",nota_exame);
	}
    if (media >= 7 && media <=10)
	    printf("\nAprovado");

    return 0;
}
