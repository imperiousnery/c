#include <stdio.h>

int main()
{
    int dias, anos, meses, restantes;

    printf("Quantidade de dias sem acidentes: ");
    scanf("%d", &dias);

    anos = dias / 360;
    restantes = dias % 360;
    meses = restantes / 30;
    restantes = restantes % 30;

    printf("Tempo sem acidentes: %d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, restantes);

    return 0;
}
