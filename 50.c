#include <stdio.h>

int main()
{
    int conta;
    float saldo, valorOperacao, novoSaldo;
    char tipoOperacao;

    // Entrada de dados
    printf("Digite o número da conta: ");
    scanf("%d", &conta);

    printf("Digite o saldo atual: ");
    scanf("%f", &saldo);

    printf("Digite o tipo de operação (D para depósito, R para retirada): ");
    scanf(" %c", &tipoOperacao);

    printf("Digite o valor da operação: ");
    scanf("%f", &valorOperacao);

    // Processamento
    if (tipoOperacao == 'D' || tipoOperacao == 'd')
    {
        novoSaldo = saldo + valorOperacao;
    }
    else if (tipoOperacao == 'R' || tipoOperacao == 'r')
    {
        novoSaldo = saldo - valorOperacao;
    }
    else
    {
        printf("Operação inválida.\n");
        return 1;
    }

    // Saída de dados
    printf("Conta: %d\n", conta);
    printf("Novo saldo: %.2f\n", novoSaldo);

    if (novoSaldo < 0)
    {
        printf("Conta estourada.\n");
    }

    return 0;
}