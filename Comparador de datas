#include <stdio.h>
#include <stdlib.h>

/*Um programa que determina a data cronologicamente maior de duas datas forne-
cidas pelo usuário. Cada data deve ser fornecida por três valores inteiros onde o primeiro
representa um dia, o segundo um mês e o terceiro um ano.
No terminal, é necessario dar espaco para adicionar a proxima parte da data.*/

int main()
{
    unsigned short diia, mees, anno;
    unsigned short dia2, mes2, ano2;

    printf("Insira uma data na ordem de dia, mês e ano:");
    scanf ("%hu %hu %hu", &diia, &mees, &anno);
    printf("Agora insira uma segunda data na mesma ordem de dia mês e ano");
    scanf ("%hu %hu %hu", &dia2, &mes2, &ano2);


        if (anno > ano2) {
            printf("A primeira data e maior.");
        }
        else if (ano2 > anno) {
            printf("A segunda data e maior.");
        }
        else if (anno == ano2 && mees > mes2) {
            printf("A primeira data e maior.");
        }
        else if (ano2 == anno && mes2 > mees) {
            printf("A segunda data e maior.");
        }
        else if (anno == ano2 && mees == mes2 && diia > dia2) {
            printf("A primeira data e maior.");
        }
        else if (ano2 == anno && mes2 == mees && dia2 > diia) {
            printf("A segunda data e maior.");
        }
        else {
            printf("As datas sao iguais");
        }

    return 0;
}
