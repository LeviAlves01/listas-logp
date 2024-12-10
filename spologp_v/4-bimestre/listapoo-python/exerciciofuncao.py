nota1=float
nota2=float
nota3=float
nota_rec=float

while True:
        def avaliar_estudante(nota1, nota2, nota3, nota_rec):
            nota1=float(input("Insira a nota 1:"))
            nota2=float(input("Insira a nota 2:"))
            nota3=float(input("Insira a nota 3:"))

            media = (nota1+nota2+nota3)/3
            if media>=7:
                print(f"Você foi aprovado com média {media}")
            else:
                nota_rec=float(input("Insira a nota da recuperação:"))
                if nota_rec >=5:
                    print(f"Aluno aprovado por Recuperação, média {media}")
                else:     
                    print(f"Aluno reprovado com média {media}")    
    
        verificar=int(input("Você deseja avaliar um aluno? 1 - SIM | 0 - NÃO:\n"))
        if verificar == 1:
            print(avaliar_estudante(nota1,nota2,nota3,nota_rec))

        else:
            print("Saindo do programa.")
            print("Saindo do programa..")
            print("Saindo do programa...")
            print("Até mais!")
            break
