class Animal:
    def fazer_barulho(self):
        pass
    
class Cachorro(Animal):
    def emitir_som(self):
        print(f"Au Au")
    
class Gato(Animal):
    def emitir_som(self):
        print(f"Miau")
    
def fazer_barulho(animal):
    animal.emitir_som()

cachorro = Cachorro()
gato = Gato()

fazer_barulho(cachorro)
fazer_barulho(gato)