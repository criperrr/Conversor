#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float temp;
    cout << "Escreva a temperatura em fahrenheit : ";
    while(!(cin>>temp)){
        cout << "Escreva um valor inteiro ou decimal" << endl;
        std::cin.clear();
        std::cin.ignore(20, '\n');

    }
    cout << "O valor em celcius e: " << ((temp-32.0)*5.0)/9.0 << " C" << endl;
    return 0;
}   
