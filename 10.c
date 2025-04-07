#include <stdio.h>
int main()
{
    float velocidade_kmh, velocidade_ms; // Declara as variÃ¡veis como reais
    // Solicita a velocidade em km/h ao usuÃ¡rio
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);
    // Calcula a velocidade em m/s dividindo por 3.6
    velocidade_ms = velocidade_kmh / 3.6;
    // Exibe o resultado com duas casas decimais
    printf("A velocidade em m/s Ã©: %.2f\n", velocidade_ms);
    return 0;
}