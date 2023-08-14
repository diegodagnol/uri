#include <stdio.h>
 
int main() {
    int cod, quant;
    float preco;
    
    scanf("%d%d", &cod, &quant);
    if(cod==1){
        preco=4.00;
    }
    else if(cod==2){
        preco=4.50;
    }
    else if(cod==3){
        preco=5.00;
    }
    else if(cod==4){
        preco=2.00;
    }
    else if(cod==5){
        preco=1.50;
    }
    printf("Total: R$ %.2f\n", quant*preco);
 
    return 0;
}
