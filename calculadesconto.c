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