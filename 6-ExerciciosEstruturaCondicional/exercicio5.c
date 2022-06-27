/*Programa que calculce troco no processo de pagamento. O programa
deve ler o preço unitário do produto, a quantidade e o valor em
dinheiro dado pelo cliente. Por fim, deve ser mostrado o valor
do troco a ser devolvido ao cliente, se o dinheiro não for
suficiente, mostrar uma mensagem informando o valor restante.*/

#include <stdio.h>

int main() {
    float precounit;
    float qntd;
    float valorrecebido;
    float precofinal;
    float restante;    

    printf("\nPreco unitario do produto: ");
    scanf("%f", &precounit);
    printf("\nQuantidade comprada: ");
    scanf("%f", &qntd);
    printf("\nDinheiro recebido: ");
    scanf("%f", &valorrecebido);

    precofinal = precounit * qntd;
    restante = precofinal - valorrecebido;

    if (valorrecebido >= precofinal)
    {
        printf("\nTROCO: %f", valorrecebido - precofinal);
    }
    else
    {
        if (valorrecebido < precofinal)
        {
            printf("O valor dado pelo cliente foi insuficiente. ");
            printf("Faltam R$%f", restante);
        }
    }
    
    return 0;
}