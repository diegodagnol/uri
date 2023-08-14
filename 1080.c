#include <stdio.h>
 
int main() {
 
    int i, n, maior = 0, position = 0;
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if (n >= maior){
            maior = n;
            position = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", position);
 
    return 0;
}
