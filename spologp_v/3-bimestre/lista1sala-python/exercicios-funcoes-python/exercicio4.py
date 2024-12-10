def fatorial(x):
    if(x<0) or (x==0):
        print("Não é possível realizar o cálculo fatorial")

    z = 1
    while x>0:
        z = z*x
        x = x-1
    return z
    
x = int(input("DIgite um valor maior que 0: "))
resultado = fatorial(x)
print(resultado)