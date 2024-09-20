#include <stdio.h>


//para trabalhar com arquivos, é necessario
//importar a biblioteca stdlib


#include <stdlib.h>



//importar a biblioteca de texxto(string) para escrever
//em arquivos 


#include <string.h>


int main(){
    system("clear");//limpar o terminal
    // Declaração da variavei palavra como um ponteiro
    // para guardar os caracteres que forma uma string


    char palavra[20]; 
    char *label_nome="Nome:" ;
    printf("Digite o seu nome completo\n");
    //scanf("%s",palavra);
    // o comando fgets(f->file | gets -> obter). assim iremos
    // obter o texto que o usuario esta digittando no terminal.
    //definimos tambem a quantidade de caracteres aceitos pelo
    //ele olha para entrada padraõ, que neste caso é teclado
    //pelo terminal

    fgets(palavra,28,stdin);
    FILE *ar;
    ar = fopen("files/teste.txt","a+");
    fseek(ar,0,SEEK_END);

    fputs(label_nome,ar);
    fputs(palavra,ar);

  

    printf("O arquivo esta no endereço:%p\n", ar);

    fclose(ar);

    return 0;
}