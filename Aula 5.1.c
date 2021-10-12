//programa que recebe 5 números inteiros e os mostra na tela
#include <stdio.h>
int main(void)
{
    int i=0; //contador
    int num;

    while(i<=4)
    {
        printf("Digite um numero:");
        scanf("%i", &num);
        printf("O valor digitado foi %i \n\n", num);
        i=i+1;

    }
}
