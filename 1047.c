#include <stdio.h>

int main()
{
    int horaInical, horaFinal, minutoInicial, minutoFinal, tempo, horas, minutos;

    scanf("%d %d %d %d", &horaInical, &minutoInicial, &horaFinal, &minutoFinal);

    if (horaFinal <= horaInical && minutoFinal <= minutoInicial)
    {
        horaFinal = horaFinal + 24;
    }
    else if (minutoFinal <= minutoInicial)
    {
        minutoFinal = minutoFinal + 60;
        horaFinal = horaFinal - 1;
    }

    tempo = ((horaFinal * 3600) + (minutoFinal * 60)) - ((horaInical * 3600) + (minutoInicial * 60));

    horas = tempo / 3600;
    minutos = (tempo - (horas * 3600)) / 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
