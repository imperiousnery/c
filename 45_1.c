#include <stdio.h>

int main()
{
    int valor, notas50, notas20, notas10, notas5, notas2, resto;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    // Calcula a quantidade de notas de 50
    notas50 = valor / 50;
    resto = valor % 50;

    // Calcula a quantidade de notas de 20
    notas20 = resto / 20;
    resto = resto % 20;

    // Calcula a quantidade de notas de 10
    notas10 = resto / 10;
    resto = resto % 10;

    // Calcula a quantidade de notas de 5
    notas5 = resto / 5;
    resto = resto % 5;

    // Calcula a quantidade de notas de 2
    notas2 = resto / 2;
    resto = resto % 2;

    // Exibe o resultado
    printf("Distribuicao de notas:\n");
    printf("Notas de 50,00: %d\n", notas50);
    printf("Notas de 20,00: %d\n", notas20);
    printf("Notas de 10,00: %d\n", notas10);
    printf("Notas de 5,00: %d\n", notas5);
    printf("Notas de 2,00: %d\n", notas2);

    // Verifica se sobrou algum valor que não pode ser atendido
    if (resto != 0)
    {
        printf("Sobrou um valor de R$ %d,00 que nao pode ser atendido.\n", resto);
    }

    return 0;
}