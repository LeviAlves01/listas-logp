#include<stdio.h>
#include<math.h>

int main() {
    float salariob, salariol, aumento1, aumento2, aumento3, aumento4, aumento5;
    char nome[50];

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite seu salário bruto (em reais): ");
    scanf("%f", &salariob);

    if(salariob<=400.00){
        aumento1 = (salariob * 15) / 100;
        salariol = salariob + aumento1;
        printf("O salário bruto do funcionário %s é de R$ %.2f e teve 15%% de aumento, seu salário líquido é: R$ %.2f\n", nome, salariob, salariol);
    } 

    else if(salariob>=401.00 && salariob<=700.00){
        aumento2 = (salariob * 12) / 100;
        salariol = salariob + aumento2;
        printf("O salário bruto do funcionário %s é de R$ %.2f e teve 12%% de aumento, seu salário líquido é: R$ %.2f\n", nome, salariob, salariol);
    } 

    else if(salariob>=701.00 && salariob<=1000.00){
        aumento3 = (salariob * 10) / 100;
        salariol = salariob + aumento3;
        printf("O salário bruto do funcionário %s é de R$ %.2f e teve 10%% de aumento, seu salário líquido é: R$ %.2f\n", nome, salariob, salariol);
    }

    else if(salariob>=1001.00 && salariob<=1800.00){
        aumento4 = (salariob * 7) / 100;
        salariol = salariob + aumento4;
        printf("O salário bruto do funcionário %s é de R$ %.2f e teve 7%% de aumento, seu salário líquido é: R$ %.2f\n", nome, salariob, salariol);
    }

    else if(salariob>=1801.00 && salariob<=2500.00){
        aumento5 = (salariob * 4) / 100;
        salariol = salariob + aumento5;
        printf("O salário bruto do funcionário %s é de R$ %.2f e teve 4%% de aumento, seu salário líquido é: R$ %.2f\n", nome, salariob, salariol);
    }

    else{
        printf("O salário bruto do funcionário %s é de R$ %.2f e não teve aumento.\n", nome, salariob);
    }

    return 0;    
}