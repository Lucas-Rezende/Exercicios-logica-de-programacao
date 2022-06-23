//Programa que leia a distância em km percorrida por um carro e o total de combustível gasto por ele para percorrer essa distância.
//Deve-se mostrar a média de consumo do carro.

#include <stdio.h>

int main()
{
    float distancia;
    float combustivel;

    printf("\nDistancia percorrida (em km): ");
    scanf("%f", &distancia);
    printf("\nCombustivel gasto (em litros): ");
    scanf("%f", &combustivel);

    printf("\nA media de consumo do carro e: %f", distancia/combustivel);
    printf("km/l");

    return 0;
}