#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float temp;
    cout << "Escreva a temperatura em Celcius : ";
    while(!(cin>>temp)){
        cout << "Escreva um valor inteiro ou decimal" << endl;
        std::cin.clear();
        std::cin.ignore(20, '\n');

    }
    cout << "O valor em Fahrenheit e: " << (temp*1.8)+32 << " F" << endl;
    return 0;
}   
