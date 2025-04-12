#include <stdio.h>

int main()
{
    int num_frangos;
    float custo_chip = 4.00;
    float custo_anel_alimento = 3.50;
    float custo_total;

    printf("Digite o número de frangos na granja: ");
    scanf("%d", &num_frangos);

    // Cada frango possui 1 anel com chip e 2 anéis de alimento
    custo_total = num_frangos * (custo_chip + 2 * custo_anel_alimento);

    printf("O gasto total para marcar todos os frangos é: R$%.2f\n", custo_total);

    return 0;
}