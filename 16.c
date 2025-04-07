#include <stdio.h>
int main()
{
    const float PRECO_PAO = 0.40;  // PreÃ§o do pÃ£o em reais
    const float PRECO_BROA = 2.00; // PreÃ§o da broa em reais
    int qtd_paes, qtd_broas;       // Quantidades de pÃ£es e broas
    float total_arrecadado, valor_poupanca;
    // Solicita as quantidades ao usuÃ¡rio
    printf("Digite a quantidade de pÃ£es vendidos: ");
    scanf("%d", &qtd_paes);
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &qtd_broas);
    // Verifica se as quantidades sÃ£o vÃ¡lidas
    if (qtd_paes < 0 || qtd_broas < 0)
    {
        printf("Erro: as quantidades nÃ£o podem ser negativas.\n");
    }
    else
    {
        // Calcula o total arrecadado
        total_arrecadado = (qtd_paes * PRECO_PAO) + (qtd_broas * PRECO_BROA);
        // Calcula o valor para a poupanÃ§a (10% do total)
        valor_poupanca = total_arrecadado * 0.10;
        // Exibe os resultados com duas casas decimais
        printf("Total arrecadado: R$ %.2f\n", total_arrecadado);
        printf("Valor a guardar na poupanÃ§a (10%%): R$ %.2f\n", valor_poupanca);
    }
    return 0;
}