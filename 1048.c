#include <stdio.h>
 
int main() {

    float salario;

    scanf("%f", &salario);

    if (salario <= 400.00)   
    {
        printf("Novo salario: %.2f\n", salario+(salario*(15/100.0)));
        printf("Reajuste ganho: %.2f\n", salario*(15/100.0));
        printf("Em percentual: 15 %\n");
    }
    else if (salario >= 400.01 && salario <= 800.00)   
    {
        printf("Novo salario: %.2f\n", salario+(salario*(12/100.0)));
        printf("Reajuste ganho: %.2f\n", salario*(12/100.0));
        printf("Em percentual: 12 %\n");
    }
    else if (salario >= 800.01 && salario <= 1200.00)   
    {
        printf("Novo salario: %.2f\n", salario+(salario*0.1));
        printf("Reajuste ganho: %.2f\n", salario*0.1);
        printf("Em percentual: 10 %\n");
    }
    else if (salario >= 1200.01 && salario <= 2000.00)   
    {
        printf("Novo salario: %.2f\n", salario+(salario*(7/100.0)));
        printf("Reajuste ganho: %.2f\n", salario*(7/100.0));
        printf("Em percentual: 7 %\n");
    }
    else {
        printf("Novo salario: %.2f\n", salario+(salario*(4/100.0)));
        printf("Reajuste ganho: %.2f\n", salario*(4/100.0));
        printf("Em percentual: 4 %\n");
    }           

    return 0;

}
