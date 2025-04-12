#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float reais, dolares, marcoAlemao, libraEsterlina;
    const float COTACAO_DOLAR = 5.75;
    const float COTACAO_MARCO_ALEMAO = 3.10;
    const float COTACAO_LIBRA_ESTERLINA = 7.28;

    // Entrada de dados
    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &reais);

    // Conversões
    dolares = reais / COTACAO_DOLAR;
    marcoAlemao = reais / COTACAO_MARCO_ALEMAO;
    libraEsterlina = reais / COTACAO_LIBRA_ESTERLINA;

    // Saída de dados
    printf("\nConversões:\n");
    printf("Dólares: %.2f\n", dolares);
    printf("Marco Alemão: %.2f\n", marcoAlemao);
    printf("Libra Esterlina: %.2f\n", libraEsterlina);

    return 0;
}