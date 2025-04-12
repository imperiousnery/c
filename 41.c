#include <stdio.h>
#include <math.h>

int main()
{
    double catA, catB, hipotenusa;

    // Solicita os valores dos catetos
    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &catA);
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &catB);

    // Calcula a hipotenusa
    hipotenusa = sqrt(pow(catA, 2) + pow(catB, 2));

    // Mostra o resultado
    printf("O valor da hipotenusa é: %.2lf\n", hipotenusa);

    return 0;
}