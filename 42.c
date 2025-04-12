#include <stdio.h>

int main()
{
    float horas_trabalhadas, salario_minimo, horas_extras;
    float valor_hora, valor_hora_extra, salario_bruto, valor_extras, salario_receber;

    // Entrada de dados
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    // Cálculos
    valor_hora = salario_minimo * 0.01;
    valor_hora_extra = salario_minimo * 0.014;
    salario_bruto = horas_trabalhadas * valor_hora;
    valor_extras = horas_extras * valor_hora_extra;
    salario_receber = salario_bruto + valor_extras;

    // Exibição do resultado
    printf("Salário a receber: R$ %.2f\n", salario_receber);

    return 0;
}