#include <stdio.h>

int main(){
    int hora, minuto;
    
    for(hora=0;hora<24;hora++){
        
        for(minuto=0;minuto<60;minuto=minuto+15)
            printf("%i : %i\n", hora, minuto);
    }
    return 0;
}