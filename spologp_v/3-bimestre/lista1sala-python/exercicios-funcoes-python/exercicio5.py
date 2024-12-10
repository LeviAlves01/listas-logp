def primo(num):
    if(num%1==0) and (num%num==0):
        num == True
        return f"Esse valor é primo: {num}"
    else:
        num == False
        return f"Esse valor não é primo: {num}"

num = int(input("Digite um valor:"))
resultado = primo(num)
print(resultado)