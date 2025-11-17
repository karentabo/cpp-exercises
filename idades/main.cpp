#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int idade1, idade2;
    string nome1, nome2;
    double media;

    cout << "Digite os dados da primeira pessoa: " << "\n";
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Digite os dados da segunda pessoa: " << "\n";
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade de " << nome1 << " e " << nome2 << " eh de " << media << " anos" << "\n";

    return 0;
}
