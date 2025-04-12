#include <stdio.h>

int main()
{
    int numero, centena, dezena, unidade;

    printf("Digite um número inteiro (até 3 dígitos): ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    printf("CENTENA = %d\n", centena);
    printf("DEZENA = %d\n", dezena);
    printf("UNIDADE = %d\n", unidade);

    return 0;
}
