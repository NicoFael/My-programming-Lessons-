#include <stdio.h>
int main (void)

{
    char mes;

    printf("Meses de 2021: \n");
    printf("\n");
    printf("1. Janeiro \n");
    printf("2. Fevereiro \n");
    printf("3. Março \n");
    printf("4. Abril \n");
    printf("5. Marco \n");
    printf("6. Junho \n");
    printf("7. Julho \n");
    printf("8. Agosto \n");
    printf("9. Setembro \n");
    printf("10. Outubro \n");
    printf("11. Novembro \n");
    printf("12. Dezembro \n");
    printf("\n");
    printf("Escolha um mes: \n");
    printf("\n");
    scanf("%c" ,&mes);
    printf("\n");

        switch(mes)
        {
        case'1':
            printf("Janeiro tem 31 dias. \n");
            break;
        case'2':
            printf("Fevereiro tem 28 dias. \n");
            break;
        case'3':
            printf("Marco tem 31 dias. \n");
            break;
        case'4':
            printf("Abril tem 30 dias. \n");
            break;
        case'5':
            printf("Maio tem 31 dias. \n");
            break;
        case'6':
            printf("Junho tem 30 dias. \n");
            break;
        case'7':
            printf("Julho tem 31 dias. \n");
            break;
        case'8':
            printf("Agosto tem 31 dias. \n");
            break;
        case'9':
            printf("Setembro tem 30 dias. \n");
            break;
        case'10':
            printf("Outubro tem 31 dias. \n");
            break;
        case'11':
            printf("Novembro tem 30 dias. \n");
            break;
        case'12':
            printf("Dezembro tem 31 dias. \n");
            break;
        default:
            printf("Entrada invalida! \n");
        }

}
