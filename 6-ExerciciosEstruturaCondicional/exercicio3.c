/*Programa que leia três números inteiros. Em seguida, mostre
qual o menor dentre os três números lidos*/

#include <stdio.h>

int main() {
    int valor1;
    int valor2;
    int valor3;
    int menor;

    printf("Primeiro valor: ");
    scanf("%i", &valor1);
    printf("Segundo valor: ");
    scanf("%i", &valor2);
    printf("Terceiro valor: ");
    scanf("%i", &valor3);

    if (valor1 < valor2 && valor1 < valor3)
    {
        menor = valor1;
    }
    else
    {
        if (valor2 < valor3)
        {
            menor = valor2;
        } 
        else
        {
            menor = valor3;
        } 
    }
     
    printf("MENOR = %i", menor);
    
    return 0;
}