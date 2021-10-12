#include <stdio.h>

int main(void)
{
    char opcao;

    printf("********* Cantina da FATEC *************\n");
    printf("****************************************\n");
    printf("Pratos disponiveis: \n");
    printf("\n");
    printf("1. Lasanha\n");
    printf("2. Feijoada\n");
    printf("3. Nhoque\n");
    printf("4. Sushi\n");
    printf("5. Strogonoff\n");
    printf("*****************************************\n");

    printf("Escolha seu prato:\n");
    printf("\n");
    printf("> ");
    scanf("%c", &opcao);

    switch(opcao)
    {
        case '1': printf("A lasanha custa R$ 19.90\n");
        break;
        case '2': printf("A feijoada custa R$ 14.90\n");
        break;
        case '3': printf("O nhoque custa R$ 15.00\n");
        break;
        case '4': printf("O sushi custa R$ 19.00\n");
        break;
        case '5': printf("O strogonoff custa R$ 25.00\n");
        break;
        default: printf("Prato invalido!\n\n");
    }

}
