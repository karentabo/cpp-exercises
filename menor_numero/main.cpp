#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceiro numero: ";
    cin >> c;

    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    cout << "Menor: " << menor << "\n";

    return 0;
}
