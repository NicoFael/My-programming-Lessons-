#include <stdio.h>

int main(void)
{
    float medidamts, convmed;

    printf("Insira a medida em metros: \n");
    scanf("%f", &medidamts);

    convmed=medidamts*1000;

    printf("O total em milimetros eh: %.3f \n", convmed);
}

