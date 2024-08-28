valor1 = int(input("Digite o primeiro valor:"))
valor2 = int(input("Digite o segundo valor:"))
valor3 = int(input("Digite o terceiro valor:"))

if(valor1>valor2>valor3) or (valor1>valor3>valor2):
    print("O maior número é:", valor1, "O número do meio é:", valor2, "O menor número é:", valor3) or ("O maior número é:", valor1, "O número do meio é:", valor3, "O menor número é:", valor2)
elif(valor2>valor1>valor3) or (valor2>valor3>valor1):
    print("O maior número é:", valor2, "O número do meio é:", valor1, "O menor número é:", valor3) or ("O maior número é:", valor2, "O número do meio é:", valor3, "O menor número é:", valor1)
elif(valor3>valor2>valor1) or (valor3>valor1>valor2):
    print("O maior número é:", valor3, "O número do meio é:", valor2, "O menor número é:", valor1) or ("O maior número é:", valor3, "O número do meio é:", valor1, "O menor número é:", valor2)
else:
    print("Não é possível ordenar esses números")

    #O programa solicita que o usuário escreva três valores inteiros e informa o menor valor, o valor do meio e o maior valor. Caso os números informados não se encaixem nas condições, ele informa que não é possível ordenar os números.