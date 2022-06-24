/*Programa para ler duas notas obtidas no primeiro e segundo
semestre. Também deve ser mostrado a nota final, caso seja menor
que 60, deve aparecer a mensagem REPROVADO*/

#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float notafinal;

    printf("\nDigite a nota do primeiro semestre: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota do segundo semestre: ");
    scanf("%f", &nota2);

    notafinal = nota1 + nota2;

    printf("\nNOTA FINAL: %f", notafinal);

    if (notafinal < 60) {
        printf("\nREPROVADO");
    } else {
        printf("\nAPROVADO\n");
    }
    
    return 0;
}