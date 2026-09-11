#include <stdio.h>
#include <stdlib.h>

//Menu que mostra a descricao de cada prato.

int main()
{
    unsigned short prato;


    printf("Ola, o menu de hoje e:\n 1- Bife a milanesa\n 2- Estrogonofe\n 3- Feijoada\n 4- Ravioli\n \n Pressione 5 para sair\n Qual prato sera pedido?");


    do {
       scanf ("%hu", &prato);
           switch (prato) {
    case 1:
        printf("\t1- Bife a milanesa\n Carne macia, ovos, farinha de trigo e farinha de rosca.\n");
        break;

    case 2:
        printf("\t2- Estrogonofe:\n Carne ou frango em cubos com molho cremoso, servido com arroz branco e batata palha.\n");
        break;

    case 3:
        printf("\t3- Feijoada\n Feijao-preto cozido com carnes de porco e boi, servido com arroz, couve, laranja e farofa.\n");
        break;

    case 4:
        printf("\t4- Ravioli\n Massa de farinha de trigo e ovos com carne.\n");
        break;

    if (prato == 5) {
    continue;}
    }}

    while (prato != 5);





    return 0;}

