#include <stdio.h>

int main() {
    int n = 8;  // Número de termos da sequência de Fibonacci
    int fib[n]; // Array para armazenar os termos

    // Os dois primeiros termos são fixos
    fib[0] = 0;
    fib[1] = 1;

    // Calculando os próximos termos da sequência
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Exibindo os termos
    printf("Os oito primeiros termos da sequência de Fibonacci são:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}