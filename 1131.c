#include <stdio.h>
 
int main() {
 
    int quantGrenais=0,vitInter=0,vitGremio=0,empates=0,golInter=0,golGremio=0,i=1,quantGolInter=0,quantGolGremio;
    
    while(i==1){
        scanf("%d%d", &golInter, &golGremio);
        quantGrenais++;
        quantGolInter+=golInter;
        quantGolGremio+=golGremio;
        
        if(golInter>golGremio){
            vitInter++;
        }
        else if(golGremio>golInter){
            vitGremio++;
        }
        else if (golGremio==golInter){
            empates++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&i);
        if(i==1){
            continue;
        }
        if(i==2){
            break;
        }
    }

    printf("%d grenais\n", quantGrenais);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n",empates);
    if(vitInter>vitGremio){
        printf("Inter venceu mais\n");
    }
    else if(vitGremio<vitInter){
        printf("Gremio venceu mais\n");
    }
    else if(vitInter==vitGremio){
        printf("Nao houve vencedor\n");
    }
  
    return 0;
}
