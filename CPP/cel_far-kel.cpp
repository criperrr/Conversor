#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int opcao = 0;
    float temp = 0;
    cout << "Voce quer pra converter de Celcius para Kelvin (1) ou Fahrenheit (2)?" << endl;
    do{
        while(!(cin>>opcao)){
            cout << "Insira um valor inteiro." << endl;
            cin.clear();
            cin.ignore(200, '\n');
        }
        if(opcao == 1 || opcao == 2){
            cout << "Insira o valor da temperatura: ";
            while(!(cin>>temp)){
                cout << "Insira um valor inteiro ou decimal. " << endl;
                cin.clear();
                cin.ignore(200, '\n');
            }
            if(opcao == 1){
                cout << "Valor em Kelvin: " << temp +273.15 << endl;
                break;
            }else{
                cout << "Valor em Fahrenheit: " << (temp*1.8)+32 << endl;
                break;
            }
        }
            
    } while(true);
    return 0;
}
