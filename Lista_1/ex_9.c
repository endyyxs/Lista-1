#include <stdlib.h>
#include <stdio.h>

int main(){ 
    float base, alt, area;
	
    printf("Digite a base do triangulo:  ");
	scanf("%f", &base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%f", &alt);
	
	area = (base * alt)/2;
	
	printf("A area do triƒngulo %.2f", area);
	
    return 0;
}
