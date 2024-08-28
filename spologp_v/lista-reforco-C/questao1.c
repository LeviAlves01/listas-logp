#include<stdio.h>
#include<math.h>

int main (){
    float salariob, salariol, aumento1, aumento2, aumento3, aumento4;
    char nome;
    printf("Digite o nome do funcionário: ");
    scanf("%c, &nome");
    printf("Digite seu salário bruto (em reais): ");

    if(salariob<=400.00){
        aumento1 = (salariob*15)/100;
        salariol = salariob+aumento1;
        printf("O salário bruto do funcionário %c", nome, "é de R$ %.2f", salariob, "e teve 15% de aumento, seu salário líquido é: R$ %.2f", salariol);
    }

    if else(401.00<=salariob<=700.00){
        aumento2 = (salariob*12)/100;
        salariol = salariob+aumento2;
        printf("O salário bruto do funcionário %c", nome, "é de R$ %.2f", salariob, " e teve 12% de aumento, seu salário líquido é: R$ %.2f", salariol);
    }

    if else(701.00<=salariob<=1000.00){
        aumento3 = (salariob*10)/100;
        salariol = salariob+aumento3;
        printf("O salário bruto do funcionário %c", nome, "é de R$ %.2f", salario)
    }
}