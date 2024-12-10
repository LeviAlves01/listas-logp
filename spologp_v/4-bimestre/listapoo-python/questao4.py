class Animal:
    def __init__(self, nome):
        self.nome = nome

    def emitir_som(self):
        return "Som de animal"
    
class Cachorro(Animal):
    def som(self):
        return "Au Au"
    
class Gato(Animal):
    def som(self):
        return "Miau"
    
spike = Cachorro("Spike")

tom = Gato("Tom")

print(spike.nome)
print(spike.som())

print(tom.nome)
print(tom.som())