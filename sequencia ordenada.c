#include <stdio.h>
#include <stdlib.h>

/*Este programa avalia se a sequencia de numeros digitados pelo usuario esta ordenada de forma crescente
utilizando duas variaveis contadoras*/

int main()
{
    int num, cont, antcont, i;

    printf("Ola, digite quantos numeros voce quer digitar para a avaliacao!\n");
    scanf ("%d", &num);

    i= 1;

    if (num <= 1){
        printf("Impossivel realizar o calculo com um so numero");
        return (0);
    }


    printf ("\nDigite o  numero na posicao 1:\n");
    scanf ("%d", &antcont);


    

    for (i = 2; i <= num; i++) {
        printf("Digite o numero na posicao %d:\n", i);
        scanf ("%d", &cont);
        
    
    if (cont <= antcont) {
        printf ("Sequencia nao ordenada!");
        break;
    } 
    
    if (i == num && cont > antcont) {
        printf("\n A sequencia e ordenada!");
    }

    antcont = cont;    
}
    return 0;
}