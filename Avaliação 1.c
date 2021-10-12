#include <stdio.h>
int main(void)
{
float saldo, saque, deposito;
int selecao;

    printf("d8888b.  .d88b.  db    db  .d8b.  db      \n");
    printf("88  `8D .8P  Y8. `8b  d8' d8' `8b 88      \n");
    printf("88oobY' 88    88  `8bd8'  88ooo88 88      \n");
    printf("88`8b   88    88    88    88~~~88 88      \n");
    printf("88 `88. `8b  d8'    88    88   88 88booo. \n");
    printf("88   YD  `Y88P'     YP    YP   YP Y88888P \n");
    printf("\n");
    printf("\n");
    printf("d8888b.  .d8b.  d8b   db db   dD \n");
    printf("88  `8D d8' `8b 888o  88 88 ,8P' \n");
    printf("88oooY' 88ooo88 88V8o 88 88,8P   \n");
    printf("88~~~b. 88~~~88 88 V8o88 88`8b   \n");
    printf("88   8D 88   88 88  V888 88 `88. \n");
    printf("Y8888P' YP   YP VP   V8P YP   YD \n");
    printf("\n");
    printf("============================================ \n");
    printf("============================================ \n");
    printf("\n");

        printf("Bem vindo(a) ao Royal Bank! \n");
        printf("Por favor, selecione a operacao: \n");
        printf("\n");
        printf("1. Depositar.       \n");
        printf("2. Sacar.           \n");
        printf("3. Verificar saldo. \n");
        printf("   > ");
        scanf("%i", &selecao);

saldo=4245.89;

switch(selecao)
{
    case 1:printf("Insira o valor do deposito: R$");
    scanf("%f", &deposito);
    saldo=(saldo+deposito);
    printf("\n");
    printf("Seu novo saldo e de R$%.2f. \n \n" ,saldo);
    printf("Obrigado por usar nosso sistema! \n \n");
    break;

    case 2:printf("Insira o valor do saque: R$");
    scanf("%f", &saque);
    saldo=(saldo-saque);
    printf("\n");
    printf("Seu novo saldo e de R$%.2f. \n \n", saldo);
    printf("Obrigado por usar nosso sistema! \n \n ");
    break;

    case 3:printf("Seu saldo atual e de R$%.2f. \n \n" ,saldo);
    printf("\n");
    printf("Obrigado por usar nosso sistema! \n \n ");
    break;

    default:printf("Operacao invalida.");

}}
