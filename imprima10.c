#include <stdio.h>

int main(){

    int numero, contagem;
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);
        for (contagem = numero; contagem <= numero + 10; contagem++) {
            printf("%d\n", contagem);
    }

    return 0;
}