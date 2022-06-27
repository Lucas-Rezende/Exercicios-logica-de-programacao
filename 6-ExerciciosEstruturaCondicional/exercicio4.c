/*Uma operadora cobra 50,00 por um plano básico que dá direito
a 100 minutos de telefone. Cada minuto que exceder a franquia
de 100 minutos custa 2,00. Faça um programa para ler a quantidade
de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago*/

#include <stdio.h>

int main() {
    int tempo;
    int extra;

    printf("\nDigite a quantidade de minutos consumidos: ");
    scanf("%i", &tempo);

    if (tempo <= 100)
    {
        printf("\nValor a pagar: R$ 50.00");
    } else {
        if (tempo > 100)
        {
            extra = ((tempo-100)*2)+50;
            printf("\nValor a pagar: R$ %i", extra);
        }
    } 

    return 0;
}