#include <stdio.h>

int main()
{
    float salario, novoSalario;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    novoSalario = salario * 1.15;

    printf("Salário com aumento: R$ %.2f\n", novoSalario);

    return 0;
}
