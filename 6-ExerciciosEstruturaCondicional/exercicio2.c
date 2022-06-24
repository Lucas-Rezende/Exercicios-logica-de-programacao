/*Programa que leia três coeficientes de uma equação de segundo
grau. Usando Baskara, calcule e mostre das raízes x1 e x2, se a
equação não possuir raízes reais, mostre uma mensagem.*/

#include <stdio.h>
#include <math.h>

int main(){
    float A;
    float B;
    float C;
    float delta;
    float x1;
    float x2;
    float deltaraiz;

    printf("\nDigite A: ");
    scanf("%f", &A);
    printf("\nDigite B: ");
    scanf("%f", &B);
    printf("\nDigite C: ");
    scanf("%f", &C); 

    delta = (B*B)-(4*A*C);
    deltaraiz = sqrt(delta);

    x1 = (-B+deltaraiz)/(2*A);
    x2 = (-B-deltaraiz)/(2*A);;

    if (delta > 0)
    {
        printf("\nAs raizes sao: \n");
        printf("%f", x1);
        printf("\n");
        printf("%f", x2);
        printf("\n");
    } else if (delta < 0) {
            printf("\nEssa equacao nao possui raizes");
        }

    return 0;
}