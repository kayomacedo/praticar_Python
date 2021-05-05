'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''



n1 = int(input('Informe o primeiro numero : '))
n2 = int(input('Informe o segundo numero : '))
print('Sinais validos são = + - / *')
sinal= (input('Informe o sinal'))


calculo=''

if sinal == '+' :
    calculo = n1 + n2
    print('A soma é ',int(calculo))
    
    
elif sinal == '-':
    calculo = n1 - n2
    print('A subtracao é ', int(calculo))

elif sinal =='/':
    calculo = n1 / n2
    print('A divisao é ', int(calculo))

elif sinal =='*':
    calculo = n1 * n2
    print('A divisao é ', int(calculo))

