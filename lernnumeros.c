#include <stdio.h>

int main() {
    int n, i, soma = 0;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        int num;
        printf("Digite mais um número; ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("The sum of the numbers is: %d\n", soma);

    return 0;
}