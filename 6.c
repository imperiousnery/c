#include <stdio.h>
int main()
{
    int x, y;
    // Solicita as coordenadas ao usuÃ¡rio
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    // Determina a localizaÃ§Ã£o do ponto
    if (x == 0 && y == 0)
    {
        printf("O ponto estÃ¡ na origem\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("O ponto estÃ¡ sobre o eixo y\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("O ponto estÃ¡ sobre o eixo x\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("O ponto estÃ¡ no 1Âº quadrante\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("O ponto estÃ¡ no 2Âº quadrante\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("O ponto estÃ¡ no 3Âº quadrante\n");
    }
    else
    {
        printf("O ponto estÃ¡ no 4Âº quadrante\n");
    }
    return 0;
}