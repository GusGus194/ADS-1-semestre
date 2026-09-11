#include <stdio.h>
#include <stdlib.h>

/*Um programa que le um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS:
São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos
os anos múltiplos de 4 mas que não são múltiplos de 100.*/

int main()
{   int ano;

    printf("Insira um ano:\n");
    scanf ("%d", &ano);

        if ((ano % 400 == 0 ) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf ("O ano e bissexto");

           } else {
            printf ("O ano nao e bissexto.");
        }
    return 0;
}
