#include <stdio.h>
int main()
{
    int num1, num2, quociente, resto; // Declara as variÃ¡veis como inteiros
    // Solicita os dois nÃºmeros ao usuÃ¡rio
    printf("Digite o primeiro nÃºmero (num1): ");
    scanf("%d", &num1);
    printf("Digite o segundo nÃºmero (num2): ");
    scanf("%d", &num2);
    // Verifica se num2 Ã© zero para evitar divisÃ£o por zero
    if (num2 == 0)
    {
        printf("Erro: divisÃ£o por zero nÃ£o Ã© permitida.\n");
    }
    else
    {
        // Calcula o quociente e o resto
        quociente = num1 / num2;
        resto = num1 % num2;
        // Exibe os resultados
        printf("Quociente: %d\n", quociente);
        printf("Resto: %d\n", resto);
    }
    return 0;
}