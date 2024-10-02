def pares(num):
    if (num%2==0):
        num == True
        return f"O valor informado é par: {num}"
    else:
        num == False
        return f"O número informado é ímpar: {num}"

num = int(input("Digite um valor:"))
resultado = pares(num)
print(resultado)