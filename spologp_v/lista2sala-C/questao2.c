#include<stdio.h>

int main()
{
    float nota1, nota2, media, exame, nova_media;
    printf("Digite a primeira nota do aluno:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno:");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

if(media>=6.0)
    printf("O aluno foi aprovado com a seguinte média: %.2f", media);

else{
    printf("Digite a nota do exame:");
    scanf("%f", &exame);
    nova_media = (media+exame)/2;
    if(nova_media>=5){
        printf("O aluno foi aprovado com a nova média: %.2f", nova_media);
    }
    else{
        printf("O aluno foi reprovado com a nova média: %.2f", nova_media);
    }

return 0;
    }
}