#include <stdio.h>
int main()
{
    int num, soma;

    printf("Digite um numero para saber o seu numero da sorte!\n");
    scanf ("%d", &num);
   

    while (num >= 10) {
     soma = 0;

    while (num > 0) {
        
        soma += num % 10;
        num = num / 10;
        
    }
    num = soma;
    }
   

    printf("\nO numero da sorte e: %d", num);

    return 0;
}