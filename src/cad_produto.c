#include <stdio.h>
#include "../lib/produto.h"

int main(){
    system("clear");
    Produto prod;
    printf("------------------------------------------------------------------------------------------------\n");
    printf("-------------------------Cadastro de Produto----------------------------------------------------\n");
    printf("------------------------------------------------------------------------------------------------\n");

    
    


    printf("Digite o nome do produto:\n");
     fgets(prod.nome, sizeof(prod.nome), stdin);

    printf("Digite a categoria do produtos:\n");
    fgets(prod.categoria, sizeof(prod.categoria), stdin);

    printf("Digite o codigo do produto:\n");
    scanf("%d",&prod.codigo);

    printf("Digite o estoque do produto:\n");
    //fgets(prod.estoque, sizeof(prod.estoque), stdin);
     scanf("%d", &prod.estoque);

    printf("Digite o preço do produto:\n");
    //fgets(prod.preco, sizeof(prod.preco), stdin);
    scanf("%f", &prod.preco);

    //Exibindo o produto cadastrado
    printf("-------------------------Produto Cadastrado----------------------------------------------------\n");
    printf("%d - %s - %s -%d - %.2f\n", prod.codigo,prod.nome,prod.categoria,prod.estoque,prod.preco);

    return 0;




}