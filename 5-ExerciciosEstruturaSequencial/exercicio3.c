//Programa que lê dois números e faz uma média.

#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float media;

    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("\nDigite outro numero: ");
    scanf("%f", &num2);

    media = (num1+num2)/2;

    printf("\nO valor da media desses dois numeros e: %f", media);

    return 0;
}