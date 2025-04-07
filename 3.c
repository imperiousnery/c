#include <stdio.h>
int main()
{
    float lado1, lado2, lado3;
    // Solicita os comprimentos dos lados
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);
    // Verifica se os lados formam um triÃ¢ngulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        // Classifica o tipo de triÃ¢ngulo
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("O triÃ¢ngulo Ã© EquilÃ¡tero.\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("O triÃ¢ngulo Ã© IsÃ³sceles.\n");
        }
        else
        {
            printf("O triÃ¢ngulo Ã© Escaleno.\n");
        }
    }
    else
    {
        printf("Os comprimentos fornecidos nÃ£o formam um triÃ¢ngulo.\n");
    }
    return 0;
}
