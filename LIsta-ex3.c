#include <stdio.h>
int main(void)
{
    int nascimento, ano, demaior;
    printf("Insira o ano do seu nascimento: \n");
    scanf("%i", &nascimento);
    printf("Insira o ano atual: \n");
    scanf("%i", &ano);

    demaior = ano-nascimento;

        if (demaior>=18)
        {
            printf("Voce tem %i anos e eh de maior. \n", demaior);
        }
        else
        {
            printf("Voce tem %i anos e eh de menor. \n", demaior);
        }
}
