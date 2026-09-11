#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* um programa que leia os valores correspondentes aos três lados a, b e c de um
triângulo. O programa então determina se o triângulo é isósceles, escaleno ou equilátero,
informando isto para o usuário, e em seguida imprime a área A do triângulo utilizando a
fórmula de Heron:*/

int main()
{   double A, B, C;
    double aux1, aux2, aux3, aux4, area;


    printf("Insira, respectivamente, os lados A, B e C do triangulo:\n");
    scanf("%lf %lf %lf", &A, &B, &C);
    double  s=(A + B + C)/2;
    //s=perimetro

    aux1 = s-A;
    aux2 = s-B;
    aux3 = s-C;
    aux4 = s*aux1*aux2*aux3;

    area = sqrt(aux4);
    printf ("A area do triângulo é:%.2lf", area);


    if (A == B && B == C && A == C) {
        printf ("\nO triangulo e equilatero");
    }
    else if (A != B && A != C && C != B) {
            printf ("\nO triangulo e escaleno");
    }
    else {
            printf ("\nO triangulo e isosceles");
    }


    return 0;
}
