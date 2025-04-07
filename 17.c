#include <stdio.h>
int main()
{
    char nome[50];
    int idade, dias;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("%s, VOCÃ\212 JÃ\201 VIVEU %d DIAS\n", nome, dias);
    return 0;
}