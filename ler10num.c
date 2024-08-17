#include <stdio.h>

int main(){
    int num, maior, menor;
    float media;
        for(int i=0; i<10; i++){
            printf("Insira 10 números:\n");
            scanf("%i", &num);   
        if(i == 0){
            menor = num;
            maior = num;
        }
        if(num > maior){ maior = num; } 
        if(num < menor){ menor = num; }
        media = media + num;
        }
        printf("%d %d %f", menor, maior, media/10);
    return 0;
}