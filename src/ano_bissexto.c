#include <stdio.h>

int main ()
{
    int ano;
    printf("Digite um ano:\n");
    scanf("%d",&ano);
    if(ano % 4 == 0)
    {
        printf("ano digitado é bissexto\n");
    }
    return 0;
}