#include <stdio.h>
int main()
{
    float comprimento, largura, area; // Declara as variÃ¡veis como reais
    // Solicita as dimensÃμes do terreno ao usuÃ¡rio
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    // Calcula a Ã¡rea do terreno
    area = comprimento * largura;
    // Exibe o resultado com duas casas decimais
    printf("A Ã¡rea do terreno Ã©: %.2f metros quadrados\n", area);
    return 0;
}