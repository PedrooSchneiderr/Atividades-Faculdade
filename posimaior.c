#include <stdio.h>

int main(){
   
    int arranjo[10];
    int quantidade = 0, maior, posicaoMaior;
   
    while(quantidade < 10){
        printf("\n", quantidade+1);
        scanf("%d", &arranjo[quantidade]);
        quantidade++;
    }
    quantidade = 0;
    maior = arranjo[0];
    while(quantidade < 10){
        if(maior < arranjo[quantidade]){
            maior = arranjo[quantidade];
            posicaoMaior = quantidade;
        }
        quantidade++;
    }
    printf("%d %d", maior, posicaoMaior+1);
   
    return 0;
}