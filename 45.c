#include <stdio.h>
#include <math.h>

int main()
{
    double total_minutes, hours, minutes, seconds;

    // Solicita ao usuário o tempo em minutos
    printf("Digite o tempo em minutos: ");
    scanf("%lf", &total_minutes);

    // Converte o tempo
    hours = (int)(total_minutes / 60);                   // Parte inteira das horas
    minutes = (int)(total_minutes) % 60;                 // Parte inteira dos minutos restantes
    seconds = (total_minutes - (int)total_minutes) * 60; // Parte fracionária convertida em segundos

    // Exibe o resultado
    printf("%.0f h %.0f min %.1f s\n", hours, minutes, seconds);

    return 0;
}