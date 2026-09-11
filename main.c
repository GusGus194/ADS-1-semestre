#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida. Obs.: (C = 5/9 · (F 32)).*/

int main()
{   double num1, cel, far;
    char G;

    printf("Bem vindo ao conversor de graus C e F,\n primeiramente, escolha qual escala de medida quer começar: \n");
    scanf ("%c", &G);

//C para F
    if (G == 'c') {
        printf("Certo, quantos graus Celsius?");
        scanf ("%lf", &num1);
        far = (num1 * 9 / 5) + 32;

        printf("\nPerfeito. %.2lf em Celsius é igual a %.2lf em Fahrenheit!", num1, far);
    }
//F para C
    else if (G == 'f') {
       printf("Certo, quantos graus Celsius?");
        scanf ("%lf", &num1);
        cel = (num1 - 32) * 5 / 9;

        printf("\nCerto! %.2lf em Celsius é igual a %.2lf em Fahrenheit!", num1, cel);
    } else {
    printf ("Valor invalido.");
    }

    return 0;
}
