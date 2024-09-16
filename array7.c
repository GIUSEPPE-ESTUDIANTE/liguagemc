#include <stdio.h>

int main(){
    char nome[]="m";
    int i = 0;
    printf("%c -> %d -> %p\n",nome[i], nome[i], &nome[i]);
    return 0;
}