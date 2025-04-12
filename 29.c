#include <stdio.h>

int main()
{
    int qtd;
    scanf("%d", &qtd);
    printf("Queijo: %.2f kg\nPresunto: %.2f kg\nCarne: %.2f kg\n", qtd * 0.1, qtd * 0.05, qtd * 0.1);
    return 0;
}