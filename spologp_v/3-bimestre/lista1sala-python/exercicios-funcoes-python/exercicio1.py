import math

def equacao2grau (a, b, c):
    if(a==0):
        print("Não é possível realizar o cálculo, pois a variável A é igual a 0")
        return
    
    delta = (b**2)-(4*a*c)

    if delta==0:
        x = -b+delta**0.5/(2*a)
        return f"A equação possui duas raízes reais e iguais: {x}"
    elif(delta>0):
        x1 = (-b + math.sqrt(delta))/(2*a)
        x2 = (-b-math.sqrt(delta))/(2*a)
        return f"A equação possui duas raízes reais: {x1} e {x2}"
    else:
        return "A equação não possui raízes reais"

a = float(input("Digite o valor de A:"))
b = float(input("Digite o valor de B:"))
c = float(input("Digite o vlor de C:"))

resultado = equacao2grau(a, b, c)
print(resultado)