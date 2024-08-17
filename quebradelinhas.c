#include <stdio.h>
#include <stdlib.h>

void desenhar(int num, int linha){
    for(int i=0;i<num;i++){
        if (i==linha){
            printf("%i", i);
        }else{
            printf("* ");
        }
    }

}

int main(){
    int quantidade;
    printf("Digite a quantidade de linhas: ");
    scanf("%i", quantidade);
    
    for(int i=0;i<quantidade;i++){
        desenhar(i, quantidade);
    }
    return 0;
}