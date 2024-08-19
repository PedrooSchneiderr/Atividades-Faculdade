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
/*Esse código em C lê 10 números digitados pelo usuário e, em seguida, 
imprime esses números na ordem inversa em que foram inseridos. 
Ou seja, ele exibe os números na sequência inversa da entrada original. */
