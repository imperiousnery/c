#include <stdio.h>

int main()
{
    int quantidadeTipo1, quantidadeTipo2, quantidadeTipo3;
    float totalArrecadado;

    // Solicita a quantidade vendida de cada tipo de picolé
    printf("Digite a quantidade vendida do tipo 1 (R$ 1,00): ");
    scanf("%d", &quantidadeTipo1);

    printf("Digite a quantidade vendida do tipo 2 (R$ 1,50): ");
    scanf("%d", &quantidadeTipo2);

    printf("Digite a quantidade vendida do tipo 3 (R$ 2,00): ");
    scanf("%d", &quantidadeTipo3);

    // Calcula o total arrecadado
    totalArrecadado = (quantidadeTipo1 * 1.00) + (quantidadeTipo2 * 1.50) + (quantidadeTipo3 * 2.00);

    // Exibe os resultados
    printf("\nQuantidade vendida:\n");
    printf("Tipo 1: %d\n", quantidadeTipo1);
    printf("Tipo 2: %d\n", quantidadeTipo2);
    printf("Tipo 3: %d\n", quantidadeTipo3);

    printf("\nTotal arrecadado: R$ %.2f\n", totalArrecadado);

    return 0;
}