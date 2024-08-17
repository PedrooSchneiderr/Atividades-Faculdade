#include <stdio.h>
#include <math.h>

int main()
{
    /*Criar um programa simples na Linguagem C capaz de ler um número n inteiro positivo da entrada padrão.
    Em seguinda, leia uma quantidade n de números, some esses números lidos e mostre o resultado. */
    int num, sum,i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);
    for (i = 0; i <= num; i++)
    {
        printf("Digite outro numero: ");
        scanf("%i", &num);
        sum += num;
        break;
    }
    printf("A soma dos numeros e: %i\n", sum);
    return 0;
}