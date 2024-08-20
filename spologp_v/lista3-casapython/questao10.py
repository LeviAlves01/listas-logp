"+" == str
"-" == str
"/" == str
"" == str
"S" == str
resultado = int


while True:
    operacao = str(input("Digite a operação (+, -, *, /) que deseja fazer ou S para sair:"))
    if(operacao=="S"):
        print("Saindo do programa...")
        break
    else:
        A = float(input("Digite o valor A:"))
        B = float(input("Digite o valor B:"))

    if(operacao=="+"):
        resultado = A+B
        print(resultado)

    elif(operacao=="-"):
        resultado = A-B
        print(resultado)

    elif(operacao=="*"):
        resultado = A*B
        print(resultado)

    elif(operacao=="/"):
        resultado = A/B
        print(resultado)

    else:
        print("Operação inválida")