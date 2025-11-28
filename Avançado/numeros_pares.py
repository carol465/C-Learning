""" Descrição:  
Escreva um programa que utilize um ciclo for para somar todos os números pares de 1 a 50 e imprima o resultado.

Requisitos:  
  Utilize um ciclo for.  
  Verifique se um número é par.
Exemplo de saída esperada:  
A soma dos números pares de 1 a 50 é: 650"""

if __name__ == "__main__":

    soma = 0

    for numero in range(0,51,2):
        if numero % 2 == 0:
            soma = soma + numero

    print(f"A soma dos números pares de 1 a 50 é {soma}")