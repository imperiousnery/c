#include <stdio.h>
int main()
{
    float C, F; // Declara as variÃ¡veis como reais
    // Solicita a temperatura em Celsius ao usuÃ¡rio
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);
    // Calcula a temperatura em Fahrenheit usando a fÃ³rmula
    F = (9 * C + 160) / 5;
    // Exibe o resultado com duas casas decimais
    printf("A temperatura em Fahrenheit Ã©: %.2f\n", F);
    return 0;
}