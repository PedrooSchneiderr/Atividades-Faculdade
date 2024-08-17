#include <stdio.h>

/*Criar um programa simples na Linguagem C que execute as seguintes operações:
Leia dois vetores, A e B, cada um contendo 10 números inteiros.
Calcule a soma dos elementos correspondentes de A e B; ou seja, some o primeiro elemento de A com o primeiro de B, 
o segundo de A com o segundo de B, e assim por diante, até o décimo elemento.
Após calcular todas as somas, imprima os resultados em uma única linha, separando cada soma por um espaço.*/

int main() {
    int A[10], B[10], soma[10];
    int i;

    printf("Digite os 10 elementos do vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 elementos do vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 10; i++) {
        soma[i] = A[i] + B[i];
    }

    printf("Somas: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}