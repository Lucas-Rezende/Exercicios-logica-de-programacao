//receber valores de base e altura de um retângulo e calcular a área, a diagonal e o perímetro.

#include <stdio.h>
#include <math.h>

int main()
{
    int base;
    int altura;
    int area;
    int diagonal;
    int perimetro;

    printf("Digite o valor da base do retangulo: ");
    scanf("%i", &base);
    printf("\nDigite o valor da altura do retangulo: ");
    scanf("%i", &altura);
    printf("\nA partir desses valores, temos que:");
    area = base*altura;
    diagonal = sqrt((base*base)+(altura*altura));
    perimetro = 2*(base+altura);
    printf("\nArea = %i", area);
    printf("\nDiagonal = %d", diagonal);
    printf("\nPerimetro = %d", perimetro);


    return 0;
}