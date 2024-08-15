valor_inteiro = int(input("Digite um valor:"))
numero_chave = 100

resultado = numero_chave-valor_inteiro

if(valor_inteiro>numero_chave):
    print("Não é possível indicar a distância desse valor")
elif(resultado<0):
    print("Esse não é um valor válido, pois a distância entre os valores é negativa")
else:
    print(resultado)