#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int n, cont;
    double somaAlt, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string nome[n];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        cout << "\nDados da " << i+1 << "a pessoa:" << "\n";
        cout << "Nome: ";
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    somaAlt = 0.0;
    for (int i = 0; i < n; i++) {
        somaAlt += altura[i];
    }

    cout << fixed << setprecision(2);

    cout << "\nA media de altura eh de " << somaAlt/n << ".it \n";

    cont = 0;
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            cont++;
        }
    }

    porcentagem = (double)cont/n * 100.0;

    cout << "Temos um total de " << porcentagem << "% menores de 16 anos e seus nomes sao: " << "\n";

    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            cout << nome[i] << "\n";
        }
    }

    return 0;
}
