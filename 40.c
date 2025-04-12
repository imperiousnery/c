#include <stdio.h>

int main()
{
    float salario, conta1, conta2, multa1, multa2, restante;

    // Entrada do salário e valores das contas
    printf("Digite o valor do salário de João: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    // Calcula as multas de 2% sobre cada conta
    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;

    // Calcula o restante do salário após pagar as contas com multa
    restante = salario - (conta1 + multa1) - (conta2 + multa2);

    // Exibe o resultado
    printf("Após pagar as contas, restará R$ %.2f do salário de João.\n", restante);

    return 0;
}