/*programa que leia a quantidade de glicose no sangue
de uma pessoa e depois mostrar na tela a classificação
desta glicose de acordo com a tabela de referência ao lado*/

#include <stdio.h>

int main(){
    float glicose;

    printf("Digite a medida da glicose: ");
    scanf("%f", &glicose);

    if (glicose <= 100)
    {
        printf("\nClassificacao: normal");
    }
    else
    {
        if (glicose > 100 && glicose <= 140)
        {
            printf("\nClassificacao: elevado");
        }
        else
        {
            if (glicose > 140)
            {
                printf("\nClassificacao: diabetes");
            }
            
        }
    }

    return 0;
}