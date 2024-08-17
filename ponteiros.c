#include <stdio.h>

int main(){
    int i =5;
    int *p = &i;

    printf("%d ", p);
    printf("%d ", &p);
    printf("%d ", *&p);
    printf("%d ", *p);
    printf("%d ", &i);
    return 0;

}