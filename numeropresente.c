#include <stdio.h>

int main(){
    
    int arranjo[10], i;
    int num;
    
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &arranjo[i]);
    
    }
    printf("Escreva outro numero: ");
    scanf("%d", &num);
    for(i=0;i<10;i++){
        if(arranjo[i] == num){ 
            printf("PRESENTE");
            return 0;
        }
    }
    printf("AUSENTE");
    return 0;
}