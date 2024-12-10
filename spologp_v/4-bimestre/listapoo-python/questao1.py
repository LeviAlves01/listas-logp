class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def exibir_informacoes(self):
        print(f"O nome da pessoa é {self.nome} e sua idade é {self.idade}")

Carlos = Pessoa("Carlos", "9")
Carlos.exibir_informacoes()

Luiza = Pessoa("Luiza", "24")
Luiza.exibir_informacoes()