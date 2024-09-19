#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 8;  
    int fib[n]; 

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Os oito primeiros termos da sequência de Fibonacci são:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}