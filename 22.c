#include <stdio.h>

int main()
{
    int pequenas, medias, grandes;
    float total;

    printf("Quantidade de camisetas pequenas: ");
    scanf("%d", &pequenas);

    printf("Quantidade de camisetas médias: ");
    scanf("%d", &medias);

    printf("Quantidade de camisetas grandes: ");
    scanf("%d", &grandes);

    total = pequenas * 20 + medias * 24 + grandes * 30;

    printf("Valor total arrecadado: R$ %.2f\n", total);

    return 0;
}
