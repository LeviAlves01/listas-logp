nota1 = float(input("Digite a primeira nota do aluno:"))
nota2 = float(input("Digite a segunda nota do aluno:"))

media = (nota1+nota2)/2

if(media>=6.0):
    print("O aluno foi aprovado com a seguinte média:", round(media, 2))
else:
    nota_exame = float(input("Digite a nota de exame:"))
    nova_media = (nota_exame+media)/2
    if(nova_media>=5.0):
            print("O aluno foi aprovado com a seguinte nova média:", round(nova_media, 2))
    else:
            print("O aluno foi reprovado")