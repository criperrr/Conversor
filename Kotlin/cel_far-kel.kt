fun main(){
    print("- Insira a temperatura em Celsius: ")
    var tempC = 0f
    while(true){
        try {
            tempC = readln().toFloat()
            break
        }
        catch(e: NumberFormatException) {
            print("- Insira um valor inteiro ou decimal: ")
        }
    }
    println("- A temperatura em Fahrenheit é: %.2f".format(tempC * 9/5 + 32))
    println("- A temperatura em Kelvin é: %.2f".format(tempC + 273.15))
}