#include<stdio.h>
#include<math.h>

int main()
{
    float salariob, salariol, horast, desconto1, desconto2, desconto3, desconto4, adicional;
    printf("Digite o salário bruto do funcionário (em reais):");
    scanf("%f", &salariob);
    printf("Digite as horas trabalhadas:");
    scanf("%f", &horast);

if(salariob<800){
    printf("Não é necessário realizar nenhum desconto");
}

if(800<salariob<1600){
    desconto1 = (salariob*8)/100;
    desconto2 = (salariob*5)/100;
    salariol = salariob-desconto1-desconto2;
    //salariol = salariol-desconto2;
    printf("O salário líquido do funcionário é: %.2f\n", salariol);
}

else if(1600<salariob){
    desconto3 = (salariob*15)/100;
    desconto4 = (salariob*7)/100;
    salariol = salariob-desconto4-desconto3;
    printf("O salário líquido do funcionário é: R$ %.2f\n", salariol);
}

else if(horast>160){
    adicional = (horast*5)/100;
    salariol = salariol+adicional;
    printf("O funcionário não precisa de adicionais de horas extras R$ %.2f\n", salariol);
}

else{
    printf("Esse funcionário não precisa de adicionais de horas extras");
}

return 0;
}