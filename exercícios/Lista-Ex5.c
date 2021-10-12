//calcula consumo médio de combustível por km.
#include <stdio.h>

int main(void){

    float quilometros, litros, medialkm;
    printf("Quilometros percorridos: \n");
    scanf("%f" ,&quilometros);
    printf("Total de litros consumidos: \n");
    scanf("%f" ,&litros);

    medialkm=quilometros/litros;
    printf("A media de combustivel consumido foi de %.1f por quilometro. \n" ,medialkm);

}
