#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

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

    char base[2]; //String pra poder usar strlwr(), só se checa o [0]
    printf("- A temperatura base está em graus Celsius(C), Fahrenheit(F) ou Kelvin(K)?\n> ");
    gets(base);
    strlwr(base);
    fflush(stdin);

    float tempC, tempF, tempK;
    bool verify; //Bool pra fazer a consistência
    do {
        verify = false;
        switch (base[0]) {
            case 'c':
                printf("- Insira a temperatura em graus Celsius:\n> ");
                scanf("%f", &tempC);
                imprimir(base, tempC);
                break;
            
            case 'f':
                printf("- Insira a temperatura em graus Fahrenheit\n> ");
                scanf("%f", &tempF);
                tempC = (tempF - 32) * 5/9;
                imprimir(base, tempC);
                break;
            
            case 'k':
                printf("- Insira a temperatura em Kelvin:\n> ");
                scanf("%f", &tempK);
                tempC = tempK - 273.15;
                imprimir(base, tempC);
                break;

            default:
                printf("- Insira uma opção válida: ");
                fflush(stdin);
                gets(base);
                strlwr(base);
                verify = true;
                break;
        }
    } while (verify); //Consistência

    return 0;
}