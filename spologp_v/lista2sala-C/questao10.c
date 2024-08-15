#include<stdio.h>

int main()
{
    int mes;
    printf("Digite um número:");
    scanf("%i", &mes);

    switch (mes)
    {
        case 1:
            printf("Esse número corresponde ao mês de janeiro");
            break;
           
        case 2:
            printf("Esse número corresponde ao mês de fevereiro");
            break;
           
        case 3:
            printf("Esse número corresponde ao mês de março");
            break;
           
        case 4:
            printf("Esse número corresponde ao mês de abril");
            break;
           
        case 5:
            printf("Esse número corresponde ao mês de maio");
            break;
           
        case 6:
            printf("Esse número corresponde ao mês de junho");
            break;
           
        case 7:
            printf("Esse número corresponde ao mês de julho");
            break;
           
        case 8:
            printf("Esse número corresponde ao mês de agosto");
            break;
           
        case 9:
            printf("Esse número corresponde ao mês de setembro");
            break;
           
        case 10:
            printf("Esse número corresponde ao mês de outubro");
            break;
           
        case 11:
            printf("Esse número corresponde ao mês de novembro");
            break;
           
        case 12:
            printf("Esse número corresponde ao mês de dezembro");
            break;

        default:
            printf("Esse número não corresponde a nenhum mês");
    }
   
    return 0;
}