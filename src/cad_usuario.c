#include <stdio.h>
#include "../lib/usuario.h"

int main(){
    //Declaração da estrutura Usuario como us
    Usuario us;

    // Declaração do tipo de FILE para manipular arquivos
    FILE *arq;
    

    //limpar a tela do terminal
    system("clear");
    printf("****************************\n");
    printf("******** Cadastro de Usuário ***********\n");
    printf("Digite o nome de usuário\n");
    //fgets pega o que usuário escreveu no terminal
    fgets(us.nomeusuario,sizeof(us.nomeusuario),stdin);
    
    printf("Digite a senha do Usuário:\n");
    fgets(us.senha, sizeof(us.senha),stdin);

    printf("Digite o nivel de acesso:\n");
    fgets(us.nivel, sizeof(us.nivel), stdin);

    // vamos abrir o arquivo para salva o usuario
    arq = fopen("file/usuarios.txt", "a+");

    // gravar os dados no arquivo no arquivo de texto
    fputs(us.nomeusuario,arq);
    fputs(us.senha,arq);
    fputs(us.nivel,arq);

    // para retirar o arquivp da memoria sera usado o comando
    //fclose
    fclose(arq);

    return 0;
}