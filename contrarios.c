#include <stdio.h>

int main(){
    int vet[10], i;

    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}