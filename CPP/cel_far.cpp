#include <iostream>
using namespace std;
float calcula(int op, float val){
    while(!(cin>>val)){
        cout << "Escreva um valor inteiro ou decimal." << endl;
        std::cin.clear();
        std::cin.ignore(20, '\n');
    }
    op==1? return (val + 273.15): ;
}
int main(int argc, char const *argv[])
{
    float temp;
    int op;
    cout << "Voce quer converter de Celsius pra Kelvin (1) ou de Celcius pra Fahrenheit (2)?";
    cin >> op;
    while(op!=1 || op != 2){
        op==1? cout << "Escreva a temperatura em Kelvin: ": op==2? cout << "Escreva a temperatura em Celcius: ": cout << "Invalido.";
    }
    calcula(op, temp);
    cout << "O valor em Fahrenheit  e: " << ((temp*5)/9)+32 << endl;
    return 0;
}   
