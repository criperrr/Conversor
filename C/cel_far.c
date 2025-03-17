#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");

    char base[2]; //String pra poder usar strlwr(), só se checa o [0]
    printf("- A temperatura base está em graus Celsius(C) ou Fahrenheit(F)?\n> ");
    gets(base);
    strlwr(base);
    fflush(stdin);
    while (base[0] != 'c' && base[0] != 'f') { //Consistência
        printf("- Insira uma opção válida: ");
        fflush(stdin);
        gets(base);
        strlwr(base);
    }
    
    float tempC, tempF;
    if (base[0] == 'c') {
        printf("- Insira a temperatura em graus Celsius:\n> ");
        scanf("%f", &tempC);
        printf("\n- Temperatura em graus Fahrenheit: %.2f", (tempC * 9/5) + 32); //Celcius -> Fahrenheit
    }
    else {
        printf("- Insira a temperatura em graus Fahrenheit\n> ");
        scanf("%f", &tempF);
        printf("\n- Temperatura em graus Celsius: %.2f", (tempF - 32) * 5/9); //Fahrenheit -> Celsius
    }

    return 0;
}