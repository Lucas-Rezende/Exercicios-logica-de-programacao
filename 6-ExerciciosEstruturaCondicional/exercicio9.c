/*Mostrar código e preço dos produtos de uma lanchonete.
O programa deve ler o código e a quantidade comprada de um 
produto (suponha um código válido), e daí informar qual o valor 
a ser pago*/

#include <stdio.h>

int main (){
    float codigo;
    float qntd;

    printf("Codigo do produto comprado: ");
    scanf("%f", &codigo);
    printf("\nQuantidade comprada: ");
    scanf("%f", &qntd);

    if (codigo == 1)
    {
        printf("\nQuantidade comprada: %f", qntd*5);
    } else {
        if (codigo == 2)
        {
            printf("\nQuantidade comprada: %f", qntd*3.5);
        } else {
            if (codigo == 3)
            {
                printf("\nQuantidade comprada: %f", qntd*4.8);
            } else {
                if (codigo == 4)
                {
                    printf("\nQuantidade comprada: %f", qntd*8.9);
                } else {
                    if (codigo == 5)
                    {
                        printf("\nQuantidade comprada: %f", qntd*7.32);
                    }
                }  
            }
        }
    }

    return 0;
}