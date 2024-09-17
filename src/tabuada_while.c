#include <stdio.h>

int main(){

    //Número que o usuario ira digitar para fazer a tabuada
    int num;
    //variaveis que inicia a tabuda em 0(zero) e vai ate 10
    int contar=0;
    //Guarda o resultado da multiplicação da variavel num com a contar
    int rs;
    printf("Digite um numero para fazer a tabuada:\n");
    scanf("%d",&num);

    while ( contar <=10){
        rs = num * contar;
        printf("%d x %d = %d\n",num,contar,rs);
        contar++;
    }
    return 0;
}