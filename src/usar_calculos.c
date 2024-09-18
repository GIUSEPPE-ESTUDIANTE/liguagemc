#include <stdio.h>
#include "../lib/calculos.h"

int main(){
    int numeros[8] = {7,12,8,45,31,52,102,34};
    printf("A soma dos numeros é %d\n", soma(numeros,8));
    printf("A media dos numeros é %d\n", media(numeros,8));
    printf("O numeros pares do array são\n");
    pares(numeros,8);
    return 0;
}
