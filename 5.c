#include <stdio.h>
int main()
{
    int numero, i;
    // Solicita ao usuÃ¡rio que digite um nÃºmero entre 1 e 10
    printf("Digite um nÃºmero entre 1 e 10 para ver sua tabuada: ");
    scanf("%d", &numero);
    // Verifica se o nÃºmero estÃ¡ dentro do intervalo permitido
    if (numero < 1 || numero > 10)
    {
        printf("Erro: o nÃºmero deve estar entre 1 e 10.\n");
        return 1; // Encerra o programa com erro
    }
    // Exibe a tabuada do nÃºmero escolhido
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", i, numero, i * numero);
    }
    return 0;
}