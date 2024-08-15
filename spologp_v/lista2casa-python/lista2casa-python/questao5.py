salariob = float(input("Digite o salário bruto (em reais):"))
horast = float(input("Digite a quantidade de horas trabalhadas no mês:"))

if(salariob<800):
    print("Não serão realizados descontos")
elif(800.00<=salariob<=1600.00):
    salario_liquido = float
    desconto1 = (salariob*8)/100
    desconto2 = (salariob*5)/100
    salario_liquido = salariob-desconto1-desconto2
    print("O salário líquido é:", "R$", '%.2f' %salario_liquido)
elif(salariob>1600.00):
    salario_liquido = float
    desconto3 = (salariob*15)/100
    desconto4 = (salariob*7)/100
    salario_liquido = salariob-desconto4-desconto3
    print("O salário líquido é:", "R$", '%.2f' %salario_liquido)

if(horast>160):
    adicional = (horast*5)/100
    salario_liquido = salario_liquido+adicional
    print("O funcionário não precisa de adicionais de horas extras R$ %.2f\n", salario_liquido)
else:
    print("O salário não precisa de adicionais de horas extras")