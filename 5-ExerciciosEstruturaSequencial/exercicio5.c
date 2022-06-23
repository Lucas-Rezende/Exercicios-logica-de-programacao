//Programa que leia o valor "r" do raio e mostre a área de um círculo

#include <stdio.h>

int main()
{
    float r;
    float area;

    printf("\nDigite o valor do raio do circulo: ");
    scanf("%f", &r);

    area = (r*r)*3.14159;

    printf("AREA = %f", area);

    return 0;
}