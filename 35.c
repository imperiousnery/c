#include <stdio.h>
#define PI 3.14159

int main()
{
    double raio, altura, volume;

    printf("Digite o raio da base da caixa d'agua (em metros): ");
    scanf("%lf", &raio);

    printf("Digite a altura da caixa d'agua (em metros): ");
    scanf("%lf", &altura);

    volume = PI * raio * raio * altura;

    printf("O volume da caixa d'agua cilindrica e: %.2lf metros cubicos\n", volume);

    return 0;
}