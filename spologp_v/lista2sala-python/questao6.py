A = float(input("Digite o número A:"))
B = float(input("Digite o número B:"))
C = float(input("Digite o número C:"))

delta = (-B)**2-4*A*C

if(delta>0):
    x1 = float
    x2 = float
    x1 = (-1)*(-B)+delta**0.5/(2*A)
    x2 = (-1)*(-B)-delta**0.5/(2*A)
    print("Essa equação possui duas raízes reais e distintas:", '%.2f' %x1, '%.2f' %x2)
elif(delta==0):
    x = float
    x = -B+delta**(1/2)/(2*A)
    print("Esse número possui raízes reais e iguais:", '%.2f' %x)
else:
    print("Esse número não possui raízes reais.")