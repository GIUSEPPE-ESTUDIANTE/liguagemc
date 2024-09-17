#include <stdio.h>

void parimpar(int vlr){
     if (vlr % 2 == 0){
        printf("O Valor é Par\n");
    }
    else{
        printf("O Valor é Impar\n");
    }
}

int main(){
    int vlr = 6;
    parimpar(vlr);
    return 0;
}