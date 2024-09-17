#include <stdio.h>

int main(){
    int final_placa;
    printf("Digite o final da placa do seu veiculo:\n");
    scanf("%d",&final_placa);

    switch(final_placa){
        case 1:
        printf("Rodizio na segunda-feira");
        break;
    case 2:
    printf("Rodizio na segunda-feira");
        break;
     case 3:
    printf("Rodizio na terça-feira");
        break;
    case 4:
    printf("Rodizio na terça-feira");
        break;
    case 5:
    printf("Rodizio na quarta-feira");
        break;
     case 6:
    printf("Rodizio na quarta-feira");
        break;
    case 7:
    printf("Rodizio na quinta-feira");
        break;
    case 8:
    printf("Rodizio na quinta-feira");
        break;
    case 9:
    printf("Rodizio na sexta-feira");
        break;
    case 0:
    printf("Rodizio na sexta-feira");
        break;
      default:
        printf("final de placa inexistente");
        break;  
        }
     return 0;   
}