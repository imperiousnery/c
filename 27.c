#include <stdio.h>

int main()
{
    float raio, area;
    const float pi = 3.14;

    printf("Digite o raio da pizza: ");
    scanf("%f", &raio);

    area = raio * raio * pi;

    printf("A área da pizza é: %.2f\n", area);

    return 0;
}