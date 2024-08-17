#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }

    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d\t", &matriz[j][i]);
        }
    }
    printf("\n");
}