#include <stdio.h>
int main()
{
    float preco_litro, valor_pagamento, litros;
    printf("Digite o preÃ§o do litro da gasolina: ");
    scanf("%f", &preco_litro);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &valor_pagamento);
    litros = valor_pagamento / preco_litro;
    printf("VocÃª conseguiu colocar %.2f litros no tanque.\n", litros);
    return 0;
}
