A = int(input("Digite o valor A:"))
B = int(input("Digite o valor B:"))
C = int(input("Digite o valor C:"))

if (A>B>C) or (A>C>B):
    print("A ordem crescente é:", C, B, A) or ("A ordem crescente é:", B, C, A)
elif(B>A>C) or (B>C>A):
    print("A ordem crescente é:", C, A, B) or ("A ordem crescente é:", A, C, B)
elif(C>B>A) or (C>A>B):
    print("A ordem crescente é:", A, B, C) or ("A ordem crescente é:", B, A, C)
else:
    print("Esses valores não podem ser dispostos em ordem crescente.")