nota1 = float(input("Digite a primeira nota do aluno:"))
nota2 = float(input("Digite a segunda nota do aluno:"))
nota3 = float(input("Digite a terceira nota do aluno:"))

media = (nota1+nota2+nota3)/3

if(media>=6.0):
    print("O aluno foi aprovado com a seguinte média:", round(media, 2))
else:
    print("O aluno foi reprovado com a seguinte média:", round(media, 2))