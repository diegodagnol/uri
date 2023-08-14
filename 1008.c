#include <stdio.h>
 
int main() {
 
    int numFuncionario, numHoras;
    float valorHora, salario;
    scanf("%d%d%f", &numFuncionario, &numHoras, &valorHora);
    
    salario = numHoras * valorHora;
    
    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}
