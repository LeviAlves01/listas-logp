#include<stdio.h>
#include<math.h>

int main() {
    float nota;
    printf("Digite a nota do aluno:");
    scanf("%f", &nota);

if(fmod(nota,1)==0.5){
    nota-=0.1;
}
    printf("A nota arredondada é: %.0f", nota);
}