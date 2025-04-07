#include <stdio.h>
int main()
{
    float base, altura, area; // Declara as variÃ¡veis como reais
    // Solicita os valores da base e da altura ao usuÃ¡rio
    printf("Digite o valor da base do triÃ¢ngulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triÃ¢ngulo: ");
    scanf("%f", &altura);
    // Calcula a Ã¡rea usando a fÃ³rmula: area = (base * altura) / 2
    area = (base * altura) / 2;
    // Exibe o resultado com duas casas decimais
    printf("A Ã¡rea do triÃ¢ngulo Ã©: %.2f\n", area);
    return 0;
}
