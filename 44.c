#include <stdio.h>

int main()
{
    float valor_mercadoria, entrada;
    int prestacao;

    // Solicita o valor da mercadoria
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor_mercadoria);

    // Calcula o valor das prestações (divisão inteira por 3)
    prestacao = (int)(valor_mercadoria / 3);

    // Calcula o valor da entrada
    entrada = valor_mercadoria - (2 * prestacao);

    // Exibe os resultados
    printf("Entrada: R$ %.2f\n", entrada);
    printf("Prestacoes: R$ %d\n", prestacao);

    return 0;
}