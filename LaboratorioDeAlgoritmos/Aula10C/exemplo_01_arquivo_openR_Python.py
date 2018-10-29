#diretorio atual
import os
os.getcwd()

#o arquivo file.txt ja deve existir

print('\nTestando o método read()')
#fazendo a leitura inteira do arquivo
handle = open('file.txt','r')
print(handle.read());

#Não será mostrado nada pois, o ponteiro do
#arquivo está na ultima posicao
print('\nExecutando o método handle.read() novamente')
print(handle.read());

#volta para a linha zero do arquivo
print('\nVoltando o ponteiro para a linha 0 do arquivo')
handle.seek(0)
print(handle.read());

#apos a manipulacao do arquivo
#é aconselhavel fazer o fechamento dele
handle.close()


print('\nTestando o método readline()')

#abertura do arquivo
handle = open('file.txt','r')

#fazendo a leitura linha a linha do arquivo
print(handle.readline());
print(handle.readline());
print(handle.readline());
#precebemos que há uma linha em branco entre as linhas,
#causadas pelo print

#volta para a linha zero do arquivo
print('\nVoltando o ponteiro para a linha 0 do arquivo')
handle.seek(0)
print(handle.readline());

#indo para a linha 5 do arquivo diretamente
print('\nVoltando o ponteiro para a linha 0 do arquivo')
handle.seek(5)
print(handle.readline());

#fechando o arquivo
handle.close()


print('\nTestando o método readlines()')
#fazendo a leitura do arquivo, colocando
#o conteudo em uma lista

#abertura do arquivo
handle = open('file.txt','r')

print(handle.readlines())

#fechando o arquivo
handle.close()


#tirando a linha branca dos entre linhas usado mo método readline()
print('\nTestando o método readline(), sem as linhas em branco')
handle = open('file.txt','r')
for linha in handle:
    linha = linha.rstrip()
    print(linha);
handle.close()

#contando as linhas do arquivo
print('\nContando as linhas do arquivo')
cont = 0
handle = open('file.txt','r')
for linha in handle:
    linha = linha.rstrip()
    cont +=1
print('\nQuantidade de linhas no arquivo: ', cont);
handle.close()


#contando linhas que contenham a palavra 'conteudo'
print('\ncontando linhas que contenham a palavra "conteudo"')
cont = 0
handle = open('file.txt','r')
for linha in handle:
    linha = linha.rstrip()
    if 'conteudo' in linha:
        cont +=1
        print(linha)
print('\nQuantidade de linhas no arquivo com a palavra "conteudo": ', cont);
handle.close()










