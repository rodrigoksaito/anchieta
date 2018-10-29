#criando e escrevem conteudo em arquivo texto (modo 'w')

print('\nTestando o método write()')
handle = open('file2.txt','w')
handle.write('linha 0 - fazendo a escrita\n')
handle.write('linha 1 - de arquivo em\n')
handle.write('linha 2 - modo w\n')
handle.write('linha 3 - utilizando a linguagem\n')
handle.write('linha 4 - Python\n')
handle.close()

#fazendo a leitura do arquivo criado
print('\nLeitura do arquivo criado')
handle = open('file2.txt','r')
for linha in handle:
    linha = linha.rstrip()
    print(linha)
handle.close()

#acrecentando texto em um arquivo ja criado (modo 'a' - append)
novotexto = input('Novo texto a ser inserido: ')
handle = open('file2.txt','a')
handle.write(novotexto + '\n')
print('Arquivo reescrito com sucesso!' + handle.name
      + ' - modo: ' +  handle.mode)
handle.close()

#fazendo a leitura do arquivo alterado
print('\nLeitura do arquivo alterado')
handle = open('file2.txt','r')
for linha in handle:
    linha = linha.rstrip()
    print(linha)
handle.close()
