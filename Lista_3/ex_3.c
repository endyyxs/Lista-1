#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1, j=4, cont_print=1, n;
    printf("Digite o numero de termos que serao impressos na tela: ");
    scanf("%d", &n);

    do {
        printf("%d  ", i);
        cont_print = cont_print + 1;
        if (cont_print > n) 
        break;
        printf("%d  ", j);
        cont_print = cont_print + 1;
        if (cont_print > n) 
        break;
        printf("%d  ", j);
        cont_print = cont_print + 1;
        if (cont_print > n) 
        break;
        i++;
        j++;
    } while(i<=n); 
     
    return 0;
}
