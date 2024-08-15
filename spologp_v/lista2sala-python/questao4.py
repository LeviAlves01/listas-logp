ladoA = int(input("Digite o valor do lado A:"))
ladoB = int(input("Digite o valor do lado B:"))
ladoC = int(input("Digite o valor do lado C:"))
triangulo = True

if(ladoA<ladoB+ladoC) and (ladoB<ladoA+ladoC) and (ladoC<ladoA+ladoB):
    triangulo = True
else:
    triangulo = False

if triangulo==True:
    if(ladoA==ladoB) and (ladoB==ladoC):
        print("Esse é um triângulo equilátero.")
    elif(ladoA==ladoB) or (ladoB==ladoC) or (ladoA==ladoC):
        print("Esse é um triângulo isósceles.")
    else:
        print("Esse é um triângulo escaleno.")

if triangulo==False:
    print("Esse não é um triângulo.")