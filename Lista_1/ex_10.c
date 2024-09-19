#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main(){ 
    float area, r;
													
	printf("Digite o raio: ");
	scanf("%f", &r);
	
	area = PI * pow(r,2);
	printf("Area:  %.2f",area);
	
    return 0;
}
