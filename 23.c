#include <stdio.h>
#include <math.h>

int main()
{
    float xA, yA, xB, yB, distancia;

    printf("Coordenada x do ponto A: ");
    scanf("%f", &xA);

    printf("Coordenada y do ponto A: ");
    scanf("%f", &yA);

    printf("Coordenada x do ponto B: ");
    scanf("%f", &xB);

    printf("Coordenada y do ponto B: ");
    scanf("%f", &yB);

    distancia = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));

    printf("Distância entre os pontos: %.2f\n", distancia);

    return 0;
}
