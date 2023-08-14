#include <stdio.h>
 
int main() {
 
    char nome;
    double vendas, salario;
    
    scanf("%s", &nome);
    scanf("%lf%lf", &salario, &vendas);
    
    printf("TOTAL = R$ %.2f\n",(salario+vendas*0.15));
 
    return 0;
}
