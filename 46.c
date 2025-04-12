#include <stdio.h>

int main()
{
    float autonomia, distancia, litros_necessarios;

    // Entrada de dados
    printf("Informe a autonomia do veiculo (em Km/l): ");
    scanf("%f", &autonomia);
    printf("Informe a distancia da viagem (em Km): ");
    scanf("%f", &distancia);

    // Cálculo da quantidade de litros necessários
    if (autonomia > 0)
    {
        litros_necessarios = distancia / autonomia;
        printf("Quantidade de litros de gasolina necessarios: %.2f litros\n", litros_necessarios);
    }
    else
    {
        printf("Autonomia invalida! Deve ser maior que zero.\n");
    }

    return 0;
}