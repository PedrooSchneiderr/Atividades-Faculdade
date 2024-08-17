#include <stdio.h>

int main(){
    int vet[10] = {5, 8, 2, 6, 1, 0, 9, 4, 3, 7};

    printf("%d\n", vet[8]);
    printf("%d\n", vet[vet[3]-vet[5]]);
    printf("%d\n", vet[vet[vet[9]]]);
    printf("%d\n", vet[7]+vet[8]);
}