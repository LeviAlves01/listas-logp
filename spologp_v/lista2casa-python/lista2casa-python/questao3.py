nota = float(input("Digite a nota do aluno:"))

if(nota%1>=0.5):
    nova_nota = int(nota)+1
    print("A nota arredondada é:", nova_nota)
else:
    nova_nota = int(nota)
    print("A nota arredondada é:", nova_nota)

#O programa solicita a nota do aluno ao usuário. Caso o resto da divisão da nota por 1 seja igual ou maior que 0,5, ele soma o valor com 1 para arredondá-lo. Caso contrário, ele exibe o valor informado normalmente.