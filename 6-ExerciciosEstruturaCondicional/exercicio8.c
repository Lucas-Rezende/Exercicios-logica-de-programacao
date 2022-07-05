/*programa que converta Fahrenheit para Celsius
e vice-versa*/

#include <stdio.h>

int main(void){
    char escala;
    float f;
    float c;

    printf("Voce vai digitar a temperatura em qual escala (c/f)? ");
    scanf("%c",&escala);
    
    if (escala == 'f')
    {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &f);
        printf("Temperatura equivalente em Celsius: %f", ((f-32)*0.556));
    } else
    {
        if (escala == 'c')
        {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &c);
            printf("Temperatura equivalente em Fahrenheit: %f", ((c*1.8)+32));
        }
    }
    
    return 0;
}