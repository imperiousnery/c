#include <stdio.h>
#include <math.h> // Para a funÃ§Ã£o sqrt (raiz quadrada)
int main()
{
    double a, b, c, d, r1, r2, parteReal, parteImaginaria;
    // Solicita os coeficientes ao usuÃ¡rio
    printf("Digite o coeficiente a (diferente de 0): ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);
    // Verifica se Ã© uma equaÃ§Ã£o de 2Âº grau
    if (a == 0)
    {
        printf("Erro: o coeficiente a deve ser diferente de zero.\n");
        return 1; // Encerra o programa com erro
    }
    // Calcula o discriminante
    d = b * b - 4 * a * c;
    // Determina as raÃ-zes com base no valor de d
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Duas raÃ-zes reais distintas:\n");
        printf("Raiz 1: %.2lf\n", r1);
        printf("Raiz 2: %.2lf\n", r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Uma raiz real (raÃ-zes iguais):\n");
        printf("Raiz: %.2lf\n", r1);
    }
    else
    {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-d) / (2 * a);
        printf("Duas raÃ-zes complexas:\n");
        printf("Raiz 1: %.2lf + %.2lfi\n", parteReal, parteImaginaria);
        printf("Raiz 2: %.2lf - %.2lfi\n", parteReal, parteImaginaria);
    }
    return 0;
}