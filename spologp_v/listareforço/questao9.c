#include<stdio.h>

int main(){
    char opcao;

switch(opcao)
    {
        case 1:
        printf("Depósito");
        break;

        case 2:
        printf("Saque");
        break;

        case 3:
        printf("Extrato");
        break;

        case 4:
        printf("Transferência");
        break;

        case E:
        printf("Encerrando o programa...");
        break;

        default:
        printf("Opção indisponível");
}

    return 0;
}