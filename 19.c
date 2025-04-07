#include <stdio.h>
int main()
{
    float peso, valor;
    const float PRECO_KG = 15.00;
    printf("Digite o peso do prato (em kg): ");
    scanf("%f", &peso);
    valor = peso * PRECO_KG;
    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}