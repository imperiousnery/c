#include <stdio.h>

int main()
{
    int latas, garrafas600, garrafas2L;
    float totalLitros;

    // Entrada de dados
    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%d", &latas);

    printf("Digite a quantidade de garrafas de 600ml: ");
    scanf("%d", &garrafas600);

    printf("Digite a quantidade de garrafas de 2 litros: ");
    scanf("%d", &garrafas2L);

    // Cálculo do total em litros
    totalLitros = (latas * 0.35) + (garrafas600 * 0.6) + (garrafas2L * 2.0);

    // Exibição do resultado
    printf("O total de litros de refrigerante comprado é: %.2f litros\n", totalLitros);

    return 0;
}