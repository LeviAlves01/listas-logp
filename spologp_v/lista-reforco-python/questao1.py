nome = str(input("Digite o nome do funcionário: "))
salariob = float(input("Digite seu salário atual (em reais): "))

if(salariob<=400.00):
    salariol = salariob + (salariob * 15/100)
    print("O salário atual do funcionário", nome, "é: R$", round(salariob, 2), "e teve 15% de aumento e seu valor líquido é: R$", round(salariol, 2))
elif(401.00<=salariob<700.00):
    salariol = salariob + (salariob * 12/100)
    print("O salário atual do funcionário", nome, "é: R$", round(salariob, 2), "e teve 12% de aumento e seu valor líquido é R$", round(salariol, 2))
elif(701.00<=salariob<=1000.00):
    salariol = salariob + (salariob * 10/100)
    print("O salário atual do funcionário", nome, "é: R$", round(salariob, 2), "e teve 10% de aumento e seu valor líquido é: R$", round(salariol, 2))
elif(1001.00<=salariob<=1800.00):
    salariol = salariob + (salariob * 7/100)
    print("O salário atual do funcionário", nome, "é de: R$", round(salariob, 2), "e teve aumento de 7% e seu valor líquido é: R$", round(salariol, 2))
elif(1801.00<=salariob<=2500.00):
    salariol = salariob + (salariob * 4/100)
    print("O salário atual do funcionário", nome, "é de: R$", round(salariob, 2), "e teve 4% de aumento e seu valor líquido é: R$", round(salariol, 2))
elif(salariob>2500.00):
    print("O salário atual do funcionário", nome, "é de: R$", round(salariob, 2), "e não precisa de aumento")