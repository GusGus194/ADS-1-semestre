#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// O programa lê um caracter ’f’ ou ’c’ e indica o equivalente na outra escala de medida de temperatura. (C = 5/9 · (F 32)).

int main()
{   double num1, cel, far;
    char Graus;

    printf("Bem vindo ao conversor de graus C e F,\n primeiramente, escolha qual escala de medida quer começar: \n");
    scanf ("%c", &Graus);

//C para F
    if (Graus == 'c' || Graus == 'C') {
        printf("Certo, quantos graus Celsius?");
        scanf ("%lf", &num1);
        far = (num1 * 9 / 5) + 32;

        printf("\nPerfeito. %.2lf em Celsius é igual a %.2lf em Fahrenheit!", num1, far);
    }
//F para C
    else if (Graus == 'f' || Graus == 'F') {
       printf("Certo, quantos graus Celsius?");
        scanf ("%lf", &num1);
        cel = (num1 - 32) * 5 / 9;

        printf("\nCerto! %.2lf em Celsius é igual a %.2lf em Fahrenheit!", num1, cel);
    } else {
    printf ("Valor invalido.");
    }

    return 0;
}
