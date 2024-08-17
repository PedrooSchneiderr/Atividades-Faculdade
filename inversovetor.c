#include <stdio.h>

int main(){
    
    int arranjo[10], i, j;
    int aux;
    
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &arranjo[i]);
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9-i; j++){
            if(arranjo[j]>arranjo[j+1]){
                aux= arranjo[j];
                arranjo[j]=arranjo[j+1];
                arranjo[j+1]=aux;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ", arranjo[i]);
    }
    return 0;
}