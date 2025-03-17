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

void imprimir(char *base, float tempC){ //Mostra os valores convertidos
    if (base[0] == 'c' || base[0] == 'k')
        printf("\n- Temperatura em graus Fahrenheit: %.2f", (tempC * 9/5) + 32);
    if (base[0] == 'k' || base[0] == 'f')
        printf("\n- Temperatura em graus Celsius: %.2f", tempC);
    if (base[0] == 'c' || base[0] == 'f')
        printf("\n- Temperatura em Kelvin: %.2f", tempC + 273.15);
}


int main(){
    setlocale(LC_ALL,"");

    char *base = (char*) malloc(2 * (sizeof(char))); //String pra poder usar strlwr(), só se checa o [0]
    printf("- A temperatura base está em graus Celsius(C), Fahrenheit(F) ou Kelvin(K)?\n> ");
    fgets(base, 2, stdin);
    fflush(stdin);
    strlwr(base);

    float tempC, tempF, tempK;
   
    Casos: //Casos possíveis, tbm serve como ponto de consistência (goto)
    switch (base[0]) {
        case 'c':
            printf("- Insira a temperatura em graus Celsius:\n> ");
            tempC = converterTipo(tempC);
            imprimir(base, tempC);
            break;
            
        case 'f':
            printf("- Insira a temperatura em graus Fahrenheit\n> ");
            tempF = converterTipo(tempF);
            tempC = (tempF - 32) * 5/9;
            imprimir(base, tempC);
            break;
            
        case 'k':
            printf("- Insira a temperatura em Kelvin:\n> ");
            tempK = converterTipo(tempK);
            tempC = tempK - 273.15;
            imprimir(base, tempC);
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