#include <stdlib.h>
#include <stdio.h>

int main(){ 
      float nota[3], peso [3], soma = 0, total_pesos = 0, media;
      int i;
 
      for(i = 0; i < 3; i++){
         printf("Digite a nota %d:", i + 1);
         scanf("%f", &nota[i]);
      }
    
      for(i = 0; i < 3; i++){
         printf("Digite o peso %d:", i + 1);
         scanf("%f", &peso[i]);
      }

      for(i = 0; i < 3; i++){
         soma = nota[i] * peso[i];
         total_pesos += peso[i];
      }
 
      media = soma / total_pesos;

    printf("Valor da media ponderada: %.2f", media);

    return 0;
}

