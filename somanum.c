#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Escreva o primeiro número\n");
    scanf("%d", &n1);
    printf("Escreva o segundo número\n");
    scanf("%d", &n2);
    int n3 = (n1 + n2);
    printf("%d\n", n3);
    return 0;
}