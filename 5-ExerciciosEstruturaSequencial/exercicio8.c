//Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
//com quatro casas decimais):
//a) a área do quadrado que tem lado A
//b) a área do triângulo retângulo que base A e altura B
//c) a área do trapézio que tem bases A e B, e altura C

#include <stdio.h>

int main()
{
    float A;
    float B;
    float C;

    printf("\nMedida A: ");
    scanf("%f", &A);
    printf("\nMedida B: ");
    scanf("%f", &B);
    printf("\nMedida C: ");
    scanf("%f", &C);

    printf("\nArea do quadrado que tem lado A: %f", A*A);
    printf("\nArea do triangulo retangulo que base A e altura B: %f", (A*B)/2);
    printf("\nArea do trapezio que tem bases A e B, e altura C: %f", ((A+B)*C)/2);

    return 0;
}