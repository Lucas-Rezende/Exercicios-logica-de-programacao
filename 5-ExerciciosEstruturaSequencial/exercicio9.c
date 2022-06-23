//Programa que lê duração do tempo em segundos e imprime na tela esta duração no formato
//horas:minutos:segundos

#include <stdio.h>

int main()
{
    int tempo;
    int resto;
    int segundos;
    int minutos;
    int horas;

    printf("\nDigite uma duracao de tempo em segundos: ");
    scanf("%i", &tempo);

    horas = tempo/3600;
    resto = tempo % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("\n%i", horas);
    printf(":%i", minutos);
    printf(":%i", segundos);

    return 0;
}