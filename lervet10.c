#include <stdio.h>
#include <stdlib.h>

/*Criar um programa simples na Linguagem C que leia 10 números,
 armazene-os num vetor, e mostre-os na ordem inversa.*/

int main(){
    int vet[10], i;

    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &i);
    }
    printf("%d", vet[0]);
    return 0;
    
}