#include <iostream>
using namespace std;

int main() 
{
    int base;
    int altura;
    int area;
    
    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite a altura: ";
    cin >> altura;

    area = base * altura;
    cout << "A área é: \n";
    cout << area;
    
    return 0;
}