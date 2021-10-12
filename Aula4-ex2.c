#include <stdio.h>

int main(void)
{
    float peso, altura, IMC;

    printf("Insira o peso: \n");
    scanf("%f", &peso);

    printf("Insira a altura: \n");
    scanf("%f", &altura);


    IMC = peso/(altura*altura);

    printf("O IMC eh: %.2f", IMC);


}


