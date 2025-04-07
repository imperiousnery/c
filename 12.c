#include <stdio.h>
int main()
{
    int N, M, C, D, U; // Declara as variÃ¡veis como inteiros
    // Solicita o nÃºmero de trÃªs algarismos ao usuÃ¡rio
    printf("Digite um nÃºmero de trÃªs algarismos: ");
    scanf("%d", &N);
    // Verifica se o nÃºmero tem exatamente trÃªs algarismos
    if (N < 100 || N > 999)
    {
        printf("Erro: o nÃºmero deve ter exatamente trÃªs algarismos (entre 100 e 999).\n");
    }
    else
    {
        // Extrai os algarismos
        C = N / 100;       // Centenas
        D = (N / 10) % 10; // Dezenas
        U = N % 10;        // Unidades
        // ConstrÃ³i o nÃºmero invertido M = UDC
        M = U * 100 + D * 10 + C;
        // Exibe o resultado
        printf("O nÃºmero invertido (M) Ã©: %d\n", M);
    }
    return 0;
}