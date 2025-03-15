#include <stdio.h>

int main(){
    float tempC; //Temperatura Celsius
    printf("- Insira a temperatura em graus Celsius:\n> ");
    scanf("%f", &tempC);
    printf("\n- Temperatura em Fahrenheit: %.2f", (tempC * 9/5) + 32);
    return 0;
}