#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros, soma;

    do{
    printf("Digite os numeros: ");
    scanf("%d", &numeros);

        soma = soma + numeros;
        
    }while(numeros != 0);

    printf("O resultado eh: %d", soma);
    return 0;
}