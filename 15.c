#include <stdio.h>
int main()
{
    int cavalos, ferraduras; // Declara as variÃ¡veis como inteiros
    // Solicita o nÃºmero de cavalos ao usuÃ¡rio
    printf("Digite o nÃºmero de cavalos comprados: ");
    scanf("%d", &cavalos);
    // Verifica se o nÃºmero de cavalos Ã© vÃ¡lido (nÃ£o-negativo)
    if (cavalos < 0)
    {
        printf("Erro: o nÃºmero de cavalos nÃ£o pode ser negativo.\n");
    }
    else
    {
        // Calcula o total de ferraduras necessÃ¡rias
        ferraduras = cavalos * 4;
        // Exibe o resultado
        printf("SÃ£o necessÃ¡rias %d ferraduras para equipar todos os cavalos.\n", ferraduras);
    }
    return 0;
}