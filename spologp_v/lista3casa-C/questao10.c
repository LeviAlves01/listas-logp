#include<stdio.h>
#include <string.h>

int main(){
    char op;
    float A;
    float B;
    int soma;
    float divisao;
    int multiplicacao;
    int subtracao;

    while (1){
        printf("Digite a operação que você deseja realizar ou digite S para sair do programa: ");
        fflush(stdin);
        scanf(" %c", &op);

        if(op=='S' || op=='s'){
            printf("Saindo do programa");
            break;
        }

        else{
            printf("Digite o valor A: ");
            scanf("%f", &A);
            printf("Digite o valor B: ");
            scanf("%f", &B);
        }

        if(op=='+'){
            soma = A+B;
            printf("%i\n", soma);
        }

        else if (op=='-'){
            subtracao = A-B;
            printf("%i\n", subtracao);
        }

        else if(op == '*'){
            multiplicacao = A*B;
            printf("%i\n", multiplicacao);
        }

        else if(op == '/'){
            divisao = A/B;
            printf("%.4f\n", divisao);
        }

        else{
            printf("Operação inválida");
        }
    }
    
    return 0; 

}