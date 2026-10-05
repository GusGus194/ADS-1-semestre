#include <stdio.h>
#include <stdlib.h>

// Um programa que leia um número n e calcule a soma de todos os números inteiros de 1 até n.

int main()
{
    int i, num, soma, resultado;

    printf("Insira um numero:!\n");
    scanf ("%d", &num);


    for (i=1; i <= num; i++) {
        soma = soma + i;
    }

    printf("A soma de todos os numeros inteiros ate o que voce colocou e: %d", soma);

    return 0;
}
