v1 = int(input("Digite o primeiro valor:"))
v2 = int(input("Digite o segundo valor:"))

if(v1%4==0) and (v2%4==0):
    print("Esses valores são divisíveis por 4:\n", v1, v2)
else:
    print("Esses valores não são divisíveis por 4\n")

if(v1%5==0) and (v2%5==0):
    print("Esses valores são divisíveis por 5:", v1, v2)
else:
    print("Esses valores não são divisíveis por 5")