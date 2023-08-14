#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, delta, R1, R2;
    scanf("%lf%lf%lf", &A, &B, &C);
    delta = (B*B)-4*A*C;
    
    if (delta < 0 || A == 0){
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %.5f\n", (-B + sqrt(delta)) / (2*A));
        printf("R2 = %.5f\n", (-B - sqrt(delta)) / (2*A));
    }
    

    return 0;
}
