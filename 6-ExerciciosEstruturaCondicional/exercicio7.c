/*No arremesso de dardo, o atleta tem três chances para lançar o 
dardo à maior distância que conseguir. Você deve criar um programa
para, dadas as medidas das três tentativas de lançamento, informar
qual foi a maior.*/

#include <stdio.h>

int main(){
    float d1;
    float d2;
    float d3;

    printf("Digite a distancia do primeiro lancamento: ");
    scanf("%f", &d1);
    printf("Digite a distancia do segundo lancamento: ");
    scanf("%f", &d2);
    printf("Digite a distancia do terceiro lancamento: ");
    scanf("%f", &d3);

    if (d1 > d2 && d1 > d3)
    {
        printf("Maior distancia: %f", d1);
    }
    else
    {
        if (d2 > d3)
        {
            printf("Maior distancia: %f", d2);
        }
        else
        {
            printf("Maior distancia: %f", d3);
        }
    }
    
    return 0;
}