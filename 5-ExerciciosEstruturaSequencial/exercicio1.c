//programa para ler medidas de largura e comprimento de um terreno retangular, 
//além de ler o preço do metro quadrado e mostrar ao usuário.

#include <stdio.h>

int main()
{
    int comprimento;
    int largura;
    int metroquad;
    int valormetroquad;
    
    printf("Digite o comprimento do terreno (em metros):");
    scanf("%i", &comprimento);
    
    printf("Digite a largura do terreno (em metros):");
    scanf("%i", &largura);
    
    printf("Digite o valor (em reais) do metro quadrado:");
    scanf("%i", &valormetroquad);

    metroquad = (comprimento * largura)*valormetroquad;

    printf("O valor do terreno e: %i", metroquad);
    return 0;
}

