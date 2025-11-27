#include <iostream>

using namespace std;

int main()
{
    int n, cont;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int elemento[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> elemento[i][j];
        }
    }

    cout << "DIAGONAL:\n";
    for (int i = 0; i < n; i++) {
        cout << elemento[i][i] << " ";
    }
    cout << "\n";

    cont = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (elemento[i][j] < 0) {
                cont++;
            }
        }
    }
    cout << "NEGATIVOS: " << cont << "\n";

    return 0;
}
