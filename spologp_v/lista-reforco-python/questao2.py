while(True):
    opcao = str(input("Digite Sim para iniciar o programa ou S para sair do programa:"))

    if(opcao=='S'):
        break
    else:
        valor = []
        valor.append = float(input("Digite os valores desejados: "))

    media = sum(valor) / len(valor)
    print("A média entre esses valores é:", media)

    if(valor):
        print("O maior valor é:\n", valor, "O menor valor é:\n", valor)
    else:
        print("O maior valor é:\n", valor, "O menor valor é:\n", valor)

    