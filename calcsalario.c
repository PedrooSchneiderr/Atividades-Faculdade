#include <stdio.h>

int main(){
    int salario;
    int aumento;
    printf("Digite o salario");
        scanf("%i", &salario);
    printf("Digite o aumento");
        scanf("%i", &aumento);
        int novo_salario = salario + (salario * aumento / 100);
    printf("Novo salario: %d\n", novo_salario);
    return 0;
}
/*Esse código em C solicita ao usuário o salário e o aumento percentual desejado, 
calcula o novo salário e exibe o resultado.*/
