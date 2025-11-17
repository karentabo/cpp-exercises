#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Digite 2 numeros:" << "\n";
    cin >> x >> y;

    while (x != y) {
        if (x < y) {
            cout << "Crescente" << "\n";
        }
        else {
            cout << "Decrescente" << "\n";
        }

        cout << "Digite outros 2 numeros:" << "\n";
        cin >> x >> y;
    }

    return 0;
}
