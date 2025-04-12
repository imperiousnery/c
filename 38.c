#include <stdio.h>

int main() {
    float salario_minimo, salario_funcionario, quantidade_salarios;

    // Entrada de dados
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    // Cálculo da quantidade de salários mínimos
    quantidade_salarios = salario_funcionario / salario_minimo;

    // Saída de dados
    printf("O funcionario ganha %.2f salarios minimos.\n", quantidade_salarios);

    return 0;
}