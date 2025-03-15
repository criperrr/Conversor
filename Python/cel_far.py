tempC = input("- Insira a temperatura em Celsius: ")
while not tempC.isnumeric():
    tempC = input("- Insira um valor inteiro ou decimal: ")
tempF = (float(tempC) * 9/5) + 32
print(f"\n- A temperatura em Fahrenheit é: {tempF:.2f}")