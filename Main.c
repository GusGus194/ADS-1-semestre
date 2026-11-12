#include <stdio.h>

// Este programa calcula o Maximo Divisor Comum de dois numeros positivos.
int main()
{
    int m, n, aux;

    printf("Primeiro numero:");
    scanf("%d", &m);
    printf("\nSegundo numero:");
    scanf("%d", &n);

    while (n > 0) {
        aux = m % n;
        m = n;
        n = aux;
    }
    printf("\nO MDC e: %d", m);
    return 0;
}
