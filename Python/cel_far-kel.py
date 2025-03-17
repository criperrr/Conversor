def converterTipo(x): # Verificação e conversão do tipo da variável
    while True:
        try:
            x = float(x)
            break
        except ValueError:
            x = input("- Insira um valor inteiro ou decimal: ")
    return x

def imprimir(base): # Mostra os valores convertidos
  if base == 'c' or base == 'k':
    print(f"- A temperatura em graus Fahrenheit é: {tempF:.2f}")
  if base == 'f' or base == 'k':
    print(f"- A temperatura em graus Celsius é: {tempC:.2f}")
  if base == 'c' or base == 'f':
    print(f"- A temperatura em Kelvin é: {tempK:.2f}")


base = input("- A temperatura base está em graus Celsius(C), Fahrenheit(F) ou Kelvin(K)?\n> ").lower()
while base != 'c' and base != 'f' and base != 'k': # Consistência
  base = input("- Insira uma opção válida: ").lower()

if base == 'c':
  tempC = input("- Insira a temperatura em graus Celsius: ")
  tempC = converterTipo(tempC)
  tempF = (tempC * 9/5) + 32 # Celsius -> Fahrenheit
  tempK = tempC + 273.15 # Celsius -> Kelvin
  imprimir(base)
    
if base == 'f':
  tempF = input("- Insira a temperatura em graus Fahrenheit: ")
  tempF = converterTipo(tempF)
  tempC = (tempF - 32) * 5/9 # Fahrenheit -> Celsius
  tempK = tempC + 273.15 # Fahrenheit -> Kelvin (usando Celsius)
  imprimir(base)
    
if base == 'k':
  tempK = input("- Insira a temperatura em Kelvin: ")
  tempK = converterTipo(tempK)
  tempC = tempK - 273.15 # Kelvin -> Celsius
  tempF = (tempC * 9/5) + 32 # Kelvin -> Fahrenheit (usando Celsius)
  imprimir(base)