
#include <stdio.h>
void mediaFinal(float n1, float n2, float n3, float n4) {
    float media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 7) {
        printf("APROVADO\n");
    } else if (media < 7 && media >= 1.7) {
        printf("EXAME\n");
    } else {
        printf("REPROVADO\n");
    }
}

int main() {
    float n1, n2, n3, n4;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    mediaFinal(n1, n2, n3, n4);

    return 0;
}
