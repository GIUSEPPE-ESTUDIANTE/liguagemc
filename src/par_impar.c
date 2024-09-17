#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero:\n");
    scanf("%d",&num);
    if(num % 2 ==  0){
        printf("O numero digitado é par");
    }
    else{
        printf("o numero digitado é impar");
    }
    return 0;
}