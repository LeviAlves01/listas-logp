nota = float(input("Digite a nota do aluno:"))

if(nota%1>=0.5):
    nova_nota = int(nota)+1
    print("A nota arredondada é:", nova_nota)
else:
    nova_nota = int(nota)
    print("A nota arredondada é:", nova_nota)