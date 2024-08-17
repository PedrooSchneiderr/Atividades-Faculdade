#include <stdio.h>

int main()
{
    /*Criar um programa simples na Linguagem C capaz de imprimir o fatorial de um número inteiro maior que zero lido da entrada padrão.*/
    int numero, antes, resultado;
    resultado = 1;
    printf("Digite um número para calcular seu fatorial");
    scanf("%i", &numero);
    antes = numero;
    do
    {
        resultado = resultado * antes;
        antes--;
    } while (antes > 1);
    printf("%i", resultado);
    return 0;
}
