#include <stdio.h>

int main()
{
    int moedas_5, moedas_10, moedas_25, moedas_50, moedas_100;
    float total;

    // Lê a quantidade de cada tipo de moeda
    printf("Digite a quantidade de moedas de 5 centavos: ");
    scanf("%d", &moedas_5);

    printf("Digite a quantidade de moedas de 10 centavos: ");
    scanf("%d", &moedas_10);

    printf("Digite a quantidade de moedas de 25 centavos: ");
    scanf("%d", &moedas_25);

    printf("Digite a quantidade de moedas de 50 centavos: ");
    scanf("%d", &moedas_50);

    printf("Digite a quantidade de moedas de 1 real: ");
    scanf("%d", &moedas_100);

    // Calcula o total economizado em reais
    total = (moedas_5 * 0.05) + (moedas_10 * 0.10) + (moedas_25 * 0.25) +
            (moedas_50 * 0.50) + (moedas_100 * 1.00);

    // Imprime o valor total economizado
    printf("O valor total economizado é: R$ %.2f\n", total);

    return 0;
}