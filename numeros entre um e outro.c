#include <stdio.h>
#include <stdlib.h>


 // Este programa imprime do numero que o usuario escolheu ate 100 e, depois, imprime os numeros entre o A e o B escolhidos pelo usuario.
int main()
{
    int a;

    printf("Digite um numero que será contado ate 100:\n");
    scanf ("%d", &a);

    while (a <= 100) {
        printf("\n%d", a);
        a++;
    }

    if (a > 101) {
        exit (1);

   } else {

    int n1, n2;

    printf("\nAgora vamos contar de um numero ate o outro. \nPrimeiro, digite o ponto de partida:\n");
    scanf ("%d", &n1);
    printf("Agora o ponto de chegada:\n");
    scanf ("%d", &n2);

    while (n1 <= n2) {
        printf ("\n%d", n1);
        n1++;
    }

}


    return 0;
}
