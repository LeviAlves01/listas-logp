valor_inteiro = int(input("Digite um valor:"))
numero_chave = 100

resultado = numero_chave-valor_inteiro

if(valor_inteiro>numero_chave):
    print("Não é possível indicar a distância desse valor")
elif(resultado<0):
    print("Esse não é um valor válido, pois a distância entre os valores é negativa")
else:
    print(resultado)

    #O algoritmo solicita ao usuário que digite um valor para indicar a diferença entre ele e o valor chave, no caso, 100. Caso o valor fornecido seja menor que 0, o programa informa que o valor é inválido, pois a distância entre eles é negativa, e caso seja maior que o número chave, também informa que não é possível indicar a diferença entre eles.