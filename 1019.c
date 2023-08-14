#include <stdio.h>
 
int main() {
 
    int N, minutos, horas;
    
    scanf("%d", &N);
    minutos = (N/60)%60;
    horas = (N/60)/60;
    N = N%60;
    printf("%d:%d:%d\n", horas, minutos, N);
 
    return 0;
}
