#include <stdio.h>

int main()
{
    float baseMaior, baseMenor, altura, area;

    // Entrada de dados
    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f", &baseMaior);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f", &baseMenor);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%f", &altura);

    // Cálculo da área
    area = ((baseMaior + baseMenor) * altura) / 2;

    // Saída do resultado
    printf("A area do trapezio e: %.2f\n", area);

    return 0;
}