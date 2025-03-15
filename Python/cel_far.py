tempC = input("- Insira a temperatura em Celsius: ")
while True:
    try:
        tempC = float(tempC)
        break
    except ValueError:
        tempC = input("- Insira um valor inteiro ou decimal: ")
tempF = (tempC * 9/5) + 32 # Temperatura em Fahrenheit
print(f"\n- A temperatura em Fahrenheit é: {tempF:.2f}")