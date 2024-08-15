#include<stdio.h>

void main()
{
    int curso;
    printf("Digite um número:");
    scanf("%i", &curso);

    switch (curso)
    {
        case 1:
            printf("Esse número corresponde ao curso de Engenharia");
            break;
           
        case 2:
            printf("Esse número corresponde ao curso de Edificações");
            break;
           
        case 3:
            printf("Esse número corresponde ao curso de Sistemas Elétricos");
            break;
           
        case 4:
            printf("Esse número corresponde ao curso de Turismo");
            break;
           
        case 5:
            printf("Esse número corresponde ao curso de Análise de Sistemas");
            break;
        
        default:
            printf("Esse número não corresponde a nenhum curso");
    }

return 0;
}