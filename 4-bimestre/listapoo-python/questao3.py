class ContaBancaria:
    def __init__(self, titular, saldo=0):
        self.titular = titular
        self.__saldo = saldo

    def depositar(self, valor):
        self.__saldo += valor
        print(f"{self.titular}, o novo saldo após o depósito é {self.__saldo} reais")

    def sacar(self, valor):
        if valor<=self.__saldo:
            self.__saldo -= valor
            print(f"{self.titular}, o novo saldo após o saque é {self.__saldo} reais")
        else:
            print("Saldo Insuficiente")

conta = ContaBancaria("Mariana")

conta.depositar(1000)

conta.sacar(200)