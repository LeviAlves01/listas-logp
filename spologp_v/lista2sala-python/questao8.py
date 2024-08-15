v1 = int(input("Digite o valor 1:"))
v2 = int(input("Digite o valor 2:"))
v3 = int(input("Digite o valor 3:"))

if(v1%3==0) and (v2%3==0) and (v3%3==0):
    print("Esses valores são divisíveis por 3:\n", v1, v2, v3)
else:
    print("Esses valores não são divisíveis por 3\n")

if(v1%2==0) and (v2%2==0) and (v3%2==0):
    print("Esses valores são divsíveis por 2:\n", v1, v2, v3)
else:
    print("Esses valores não são divisíveis por 2")