#include <stdio.h>
int main()
{
    const float PI = 3.14159; // Define a constante PI
    float RAIO, AREA;         // Declara as variÃ¡veis RAIO e AREA como reais
    // Solicita o valor do raio ao usuÃ¡rio
    printf("Digite o valor do raio da circunferÃªncia: ");
    scanf("%f", &RAIO);
    // Calcula a Ã¡rea usando a fÃ³rmula AREA = PI * RAIOÂ²
    AREA = PI * (RAIO * RAIO);
    // Exibe o resultado com duas casas decimais
    printf("A Ã¡rea da circunferÃªncia Ã©: %.2f\n", AREA);
    return 0;
}
