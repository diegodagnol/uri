#include <stdio.h>
 
int main(){
    int horaInical, horaFinal;

    scanf("%d %d", &horaInical, &horaFinal);

    if (horaInical == horaFinal)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (horaInical < horaFinal)
    {
        printf("O JOGO DUROU %d HORA(S)\n", horaFinal-horaInical);
    }
    else if (horaInical > horaFinal)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24-horaInical+horaFinal);
    }
    
    return 0;
    
}
