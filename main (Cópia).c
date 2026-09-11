/*Cálculo de Eratostenes

Objetivo do programa: Calcular a circunferencia de um planeta X utilizando o metodo de Eratostenes.
Entrada:
D = Distancia entre dois pontos
A = angulo de um dos pontos em relacao ao sol

Saida:
Ce = Circunferencia medida em estadios
Ckm = Circunferencia medida em quilometros

*/

#include <stdio.h>


int main()
{
    double D, A, Ce, Ckm;

    printf("Ola, esse programa calcula a circunferência de um planeta!\n");

    printf("Por favor,digite a distância |em estadios| entre dois pontos do mesmo meridiano: ");
        scanf("%lf", &D);

    printf("Agora, o ângulo de um desses pontos:\n ");
        scanf("%lf", &A);

        Ce = (360 / A) * D; // O tamanho da circuferencia do planeta em estadios |176.4 metros|
            Ckm = Ce * 0.1764; // Conversao de estadios para quilometros

    printf ("O seu planeta possui %.1lf estadios de circunferencia que e o mesmo que %.1lf quilometros ", Ce, Ckm);
    return 0;

/*Teste 01:
Entrada
5000.0
7.2
Saida
250000.0
44100.0




Teste 02:
Entrada
1000.0
1.0
Saida
360000.0
63504.0



Teste 03:
Entrada
1500.0
360.0
Saida
1500.0
264.6



Teste 04:
Entrada
7000.0
7.0
Saida
360000.0
63504.0



Teste 05:
Entrada
6767.0
67.7
Saida
35984.0
6347.6
*/
}
