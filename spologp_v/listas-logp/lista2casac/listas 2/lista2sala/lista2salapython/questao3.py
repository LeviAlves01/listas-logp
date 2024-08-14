v1 = int(input("Digite o primeiro valor:"))
v2 = int(input("Digite o segundo valor:"))

diferenca = v1-v2

if(v1>v2):
    print("A diferença do maior para o menor valor é:", diferenca)
else:
    diferenca = v2-v1
    print("A diferença do maior valor para o menor é:", diferenca)