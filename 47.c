#include <stdio.h>

int main()
{
    const float SALARIO_MINIMO = 1212.00; // Atualize conforme o salário mínimo vigente
    const float COMISSAO_FIXA = 50.00;
    const float PERCENTUAL_VENDAS = 0.05;

    int carrosVendidos;
    float valorTotalVendas, salarioTotal;

    // Entrada de dados
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valorTotalVendas);

    // Cálculo do salário total
    salarioTotal = (2 * SALARIO_MINIMO) + (carrosVendidos * COMISSAO_FIXA) + (valorTotalVendas * PERCENTUAL_VENDAS);

    // Saída do salário total
    printf("O salário total do vendedor é: R$ %.2f\n", salarioTotal);

    return 0;
}