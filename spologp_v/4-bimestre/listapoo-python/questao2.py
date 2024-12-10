class Carro:
    def __init__(self, marca, modelo, ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
    
    def exibir_detalhes(self):
        print(f"O carro pertence a marca {self.marca}, seu modelo é {self.modelo} e o ano de lançamento é {self.ano}")

hb20 = Carro("Hyundai", "HB20", "2012")
hb20.exibir_detalhes()

toro = Carro("Fiat", "Toro", "2016")
toro.exibir_detalhes()

renegade = Carro("Jeep", "Renegade", "2014")
renegade.exibir_detalhes()