#include <stdio.h>

int main()
{
    float total_refresco, agua, suco;

    // Solicita ao usuário a quantidade de refresco desejada
    printf("Digite a quantidade de refresco (em litros): ");
    scanf("%f", &total_refresco);

    // Calcula a quantidade de água e suco
    agua = (8.0 / 10.0) * total_refresco;
    suco = (2.0 / 10.0) * total_refresco;

    // Exibe os resultados
    printf("Para fazer %.2f litros de refresco, você precisará de:\n", total_refresco);
    printf("- %.2f litros de água\n", agua);
    printf("- %.2f litros de suco de maracujá\n", suco);

    return 0;
}