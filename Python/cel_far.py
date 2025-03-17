def converterTipo(x): # Verificação e conversão do tipo da variável
    while True:
        try:
            x = float(x)
            break
        except ValueError:
            x = input("- Insira um valor inteiro ou decimal: ")
    return x


base = input("- A temperatura base está em graus Celsius(C) ou Fahrenheit(F)?\n> ").lower()
while base != 'c' and base != 'f': # Consistência
    base = input("- Insira uma opção válida: ").lower()

if base == 'c':
    tempC = input("- Insira a temperatura em graus Celsius: ")
    tempC = converterTipo(tempC)
    tempF = (tempC * 9/5) + 32 # Temperatura em Fahrenheit
    
else:
    tempF = input("- Insira a temperatura em graus Fahrenheit: ")
    tempF = converterTipo(tempF)
    tempC = (tempF - 32) * 5/9 # Temperatura em Celsius

print(f"\n- A temperatura em graus Fahrenheit é: {tempF:.2f}") if base == 'c' else print(f"\n- A temperatura em graus Celsius é: {tempC:.2f}")