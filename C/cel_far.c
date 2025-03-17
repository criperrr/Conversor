#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

float converterTipo(float x) { //Consistência de tipo usando o valor de retorno do scanf()
    if (scanf("%f", &x) != 1) {
        printf("- Insira um valor inteiro ou decimal: ");
        while(getchar() != '\n'); //Limpa o stdin (coisa que o fflush não consegue)
        converterTipo(x);
    }
    else {
        return x;
    }
}

int main(){
    setlocale(LC_ALL,"");

    char *base = (char*) malloc(2 * (sizeof(char))); //String pra poder usar strlwr(), só se checa o [0]
    printf("- A temperatura base está em graus Celsius(C) ou Fahrenheit(F)?\n> ");
    fgets(base, 2, stdin);
    strlwr(base);
    fflush(stdin);
    
    float tempC, tempF;

    Casos: //Casos possíveis, tbm serve como ponto de consistência (goto)
    switch (base[0]) {
        case 'c':
            printf("- Insira a temperatura em graus Celsius:\n> ");
            tempC = converterTipo(tempC);
            printf("\n- Temperatura em graus Fahrenheit: %.2f", (tempC * 9/5) + 32); //Celcius -> Fahrenheit
            break;
        
        case 'f':
            printf("- Insira a temperatura em graus Fahrenheit\n> ");
            tempF = converterTipo(tempF);
            printf("\n- Temperatura em graus Celsius: %.2f", (tempF - 32) * 5/9); //Fahrenheit -> Celsius
            break;
        
        default:
            printf("- Insira uma opção válida: ");
            fgets(base, 2, stdin);
            fflush(stdin);
            strlwr(base);
            goto Casos;
            break;
    }

    free(base);
    return 0;
}