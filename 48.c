#include <stdio.h>

int main()
{
    char nome[4][50];
    float preco[4], desconto[4], precoComDesconto[4], total = 0;

    printf("Digite o nome do artigo 1: ");
    scanf(" %[^\n]", nome[0]);
    printf("Digite o preço do artigo 1: ");
    scanf("%f", &preco[0]);
    printf("Digite o percentual de desconto do artigo 1: ");
    scanf("%f", &desconto[0]);
    precoComDesconto[0] = preco[0] - (preco[0] * desconto[0] / 100);
    total = total + precoComDesconto[0];

    printf("Digite o nome do artigo 2: ");
    scanf(" %[^\n]", nome[1]);
    printf("Digite o preço do artigo 2: ");
    scanf("%f", &preco[1]);
    printf("Digite o percentual de desconto do artigo 2: ");
    scanf("%f", &desconto[1]);
    precoComDesconto[1] = preco[1] - (preco[1] * desconto[1] / 100);
    total = total + precoComDesconto[1];

    printf("Digite o nome do artigo 3: ");
    scanf(" %[^\n]", nome[2]);
    printf("Digite o preço do artigo 3: ");
    scanf("%f", &preco[2]);
    printf("Digite o percentual de desconto do artigo 3: ");
    scanf("%f", &desconto[2]);
    precoComDesconto[2] = preco[2] - (preco[2] * desconto[2] / 100);
    total = total + precoComDesconto[2];

    printf("Digite o nome do artigo 4: ");
    scanf(" %[^\n]", nome[3]);
    printf("Digite o preço do artigo 4: ");
    scanf("%f", &preco[3]);
    printf("Digite o percentual de desconto do artigo 4: ");
    scanf("%f", &desconto[3]);
    precoComDesconto[3] = preco[3] - (preco[3] * desconto[3] / 100);
    total = total + precoComDesconto[3];

    printf("\nResumo da compra:\n");

    printf("Artigo: %s\n", nome[0]);
    printf("Preço original: R$%.2f\n", preco[0]);
    printf("Preço com desconto: R$%.2f\n\n", precoComDesconto[0]);

    printf("Artigo: %s\n", nome[1]);
    printf("Preço original: R$%.2f\n", preco[1]);
    printf("Preço com desconto: R$%.2f\n\n", precoComDesconto[1]);

    printf("Artigo: %s\n", nome[2]);
    printf("Preço original: R$%.2f\n", preco[2]);
    printf("Preço com desconto: R$%.2f\n\n", precoComDesconto[2]);

    printf("Artigo: %s\n", nome[3]);
    printf("Preço original: R$%.2f\n", preco[3]);
    printf("Preço com desconto: R$%.2f\n\n", precoComDesconto[3]);

    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}
