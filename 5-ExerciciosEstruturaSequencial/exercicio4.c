//Faça um programa que calcule o troco de uma compra, supondo que o cliente tenha dinheiro o suficiente

#include <stdio.h>

int main()
{
    float precoproduto;
    float quantidade;
    float dinheirogasto;
    float dinheirorecebido;
    float troco;

    printf("\nDigite o preco unitario do produto: ");
    scanf("%f", &precoproduto);
    printf("\nDigite a quantidade comprada: ");
    scanf("%f", &quantidade);
    printf("\nDigite qual o valor recebido: ");
    scanf("%f", &dinheirorecebido);

    dinheirogasto = precoproduto*quantidade;
    troco = dinheirorecebido - dinheirogasto;

    printf("\nTROCO: %f", troco);
    return 0;
}