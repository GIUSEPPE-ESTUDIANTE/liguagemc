#include <stdio.h>

int main(){
    float nota1 , nota2, nota3, nota4, media;
     printf("Digite a primeira nota:");
     scanf("%f",&nota1);

     printf("Digite a segunda nota:");
     scanf("%f",&nota2);

     printf("Digite a terceira nota:");
     scanf("%f",&nota3);

     printf("Digite a quarta nota:");
     scanf("%f",& nota4);

     media = (nota1 + nota2 + nota3 + nota4) / 4;
    /*
    para alunos com media maior ou igual a 6, aprovado
    Para alunos com media menor ou igual 4, reprovado
    Para os demais com notas entre maior 4 e menor 6, recuperação 
    */  





     printf("a media do estudante e: %f\n", media);

     if (media >= 6.0){
        printf("Estudante aprovado!%.2f\n" ,media);
     } else if (media<= 4.0){
        printf(" REPROVADO!%.2f\n" ,media);
     }
     else{
        printf("Estudante está de recuperação!%.2f\n" ,media);
     }
    return 0;
}