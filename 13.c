#include <stdio.h>
int main()
{
    int data, dia, mes, ano, nova_data;
    // Solicita a data no formato DDMMAA
    printf("Digite a data no formato DDMMAA: ");
    scanf("%d", &data);
    // Verifica se a data tem seis algarismos e estÃ¡ em um intervalo bÃ¡sico
    if (data < 010100 || data > 311299)
    {
        printf("Erro: a data deve ter seis algarismos no formato DDMMAA (ex.: 251223).\n");
    }
    else
    {
        // Extrai os componentes da data
        dia = data / 10000;       // Divide por 10000 para pegar DD
        mes = (data / 100) % 100; // Divide por 100 e pega o resto para MM
        ano = data % 100;         // Pega o resto para AA
        // ConstrÃ³i a nova data no formato AAMMDD
        nova_data = ano * 10000 + mes * 100 + dia;
        // Exibe o resultado
        printf("A data no formato AAMMDD Ã©: %06d\n", nova_data);
    }
    return 0;
}