#include <stdio.h>

int main()
{
    float total;
    scanf("%f", &total);
    int carlos = total / 3, andre = carlos;
    float felipe = total - 2 * carlos;
    printf("Carlos: R$%d,00\nAndré: R$%d,00\nFelipe: R$%.2f\n", carlos, andre, felipe);
    return 0;
}