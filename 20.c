#include <stdio.h>
int main()
{
    int dia, mes, dias_totais;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mÃªs: ");
    scanf("%d", &mes);
    dias_totais = (mes - 1) * 30 + dia;
    printf("Dias passados desde o inÃ-cio do ano: %d\n", dias_totais);
    return 0;
}