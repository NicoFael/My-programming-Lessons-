#include <stdlib.h>

int main(void)
{
    int num;
    printf("Digite um numero: \n");
    scanf("%i", &num);
        if(num==0)
        {
            printf("O numero e igual a zero. \n");
        }
        else if(num>0)
        {
            printf("O numero e maior que zero. \n");
        }
        else if(num<0)
        {
            printf("O numero e menor que zero. \n");
        }

}
