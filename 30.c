#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int horasNormais, horasExtras;
    float salarioBruto, salarioLiquido;
    const float VALOR_HORA_NORMAL = 30.0;
    const float VALOR_HORA_EXTRA = 45.0;
    const float IMPOSTO = 0.10;

    // Entrada de dados
    printf("Informe a quantidade de horas normais trabalhadas: ");
    scanf("%d", &horasNormais);
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    // Cálculo do salário bruto
    salarioBruto = (horasNormais * VALOR_HORA_NORMAL) + (horasExtras * VALOR_HORA_EXTRA);

    // Cálculo do salário líquido
    salarioLiquido = salarioBruto * (1 - IMPOSTO);

    // Saída dos resultados
    printf("Salário Bruto: R$%.2f\n", salarioBruto);
    printf("Salário Líquido: R$%.2f\n", salarioLiquido);

    return 0;
}