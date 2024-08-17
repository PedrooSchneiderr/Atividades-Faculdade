#include <stdio.h>
#include <stdlib.h>

int fat(int n){
    if(n==1){
        return 1;
        }else{
            return n*fat(n-1);
    }

}

int main(){
    int numero;
    int resultado;

    printf("Digite um número para calcular seu fatorial: ");
    scanf("%i", &numero);
    
    resultado = fat(numero);
    printf("%d", resultado);

    return 0;
}