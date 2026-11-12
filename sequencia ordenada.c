#include <stdio.h>


/*Este programa avalia se a sequencia de numeros digitados pelo usuario esta ordenada de forma crescente
utilizando uma variavel contadora*/

int main()
{
    int num, atual, ant, i, cont=0;

    printf("Ola, digite quantos numeros voce quer digitar para a avaliacao!\n");
    scanf ("%d", &num);

    i= 1;

    if (num <= 1){
        printf("Sequencia com um so numero ja e ordenada.");
        return (0);
    }


    printf ("\nDigite o  numero na posicao 1:\n");
    scanf ("%d", &ant);


    

    for (i = 2; i <= num; i++) {
        printf("Digite o numero na posicao %d:\n", i);
        scanf ("%d", &atual);
        
    
    if (atual < ant) {
        cont++;
    } 

    ant = atual;    
}   
    if (cont == 0 ) {
        printf("\nSequencia ordenada.");
    } else {
        printf("\nSequencia nao ordenada.");
    }
    
        return 0;
}
