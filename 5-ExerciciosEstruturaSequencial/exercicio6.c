//Programa que calcule o valor/hora de um funcionário e a quantidade de horas trabalhadas, mostrando o valor do pagamento.

#include <stdio.h>

int main()
{
    float vph;
    float horas;

    printf("\nInsira o valor por hora do funcionario: ");
    scanf("%f", &vph);
    printf("\nInsira o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("O pagamento devido equivale a = %f", vph*horas);

    return 0;
}