#include <stdio.h>

int main(){
    float preco;
    float desconto;

    printf("Digite: ");
    scanf("%f", &preco);
    printf("Digite: ");
    scanf("%f", &desconto);
    printf("%.1f %.1f", preco-(preco*desconto/100), (preco*desconto/100));

    return 0;
}
/*Nesse código em C, o programa solicita ao usuário um preço e um desconto, 
calcula o valor com desconto e exibe ambos o valor com desconto e o valor do desconto aplicado*/
