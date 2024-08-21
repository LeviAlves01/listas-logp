opcao = str(input('"Digite uma das seguintes opções:\n 1. Depósito\n 2. Saque\n 3. Extrato\n 4. Transferência\n ou E para encerrar o programa: '))

if(opcao=="1"):
    print("Depósito")
elif(opcao=="2"):
    print("Saque")
elif(opcao=="3"):
    print("Extrato")
elif(opcao=="4"):
    print("Transferência")
elif(opcao=="E"):
    print("Encerrando o programa...")
else:
    print("Opção indisponível")