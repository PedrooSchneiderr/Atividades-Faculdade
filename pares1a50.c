#include <stdio.h>

int main() {
    int a;
    for (a = 0; a <= 50; a++) {
        if (a % 2 == 0) {
            printf("%d ", a);
        }
        if (a == 50) {
            break;
        }
    }
    return 0;
}