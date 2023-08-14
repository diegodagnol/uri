#include <stdio.h>
 
int main() {
 
    int i, cont;
    float n;
    cont = 0;
    for(i = 1; i <= 6; i++){
        scanf("%f", &n);
        if (n > 0){
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
 
    return 0;
}
