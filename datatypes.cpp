#include <iostream>
using namespace std;

int main() {
    int ivar;
    double dvar;

    ivar = 100;
    dvar = 100.0;

    cout << "Valor de ivar: " << ivar << "\n";
    std::cout << "Valor de dvar: " << dvar << "\n";

    cout << "\n";

    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "valor de ivar após divisão: " << ivar << "\n";
    cout << "valor de dvar após divisão: " << dvar << "\n";

    return 0;
}