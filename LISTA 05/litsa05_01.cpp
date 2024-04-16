#include <iostream>
#include <string>
using namespace std;
void insertnames(string names[], int& size, const string& nuname) {
    int position = 0;
    while (position < size && names[position] < nuname) {
        position++;
    }
    for (int i = size; i > position; i--) {
        names[i] = names[i - 1];
    }
    names[position] = nuname;
    size++;
}

int main() {
    int n;
    cout << "Insira o número de nomes: ";
    cin >> n;

    string names[n];
    int size = 0;

    cout << "Digite os nomes:" << endl;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        insertnames(names, size, name);
    }

    cout << "Nomes ordenados:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
