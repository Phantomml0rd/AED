#include <iostream>
#include <string>
using namespace std;
void selectionSort(string names[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (names[j].length() < names[smallest_idx].length()) {
                smallest_idx = j;
            }
        }
        string temp = names[i];
        names[i] = names[smallest_idx];
        names[smallest_idx] = temp;
  }
}
void displayNames(string names[], int size) {
    cout << "Nomes ordenados pelo tamanho:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }
}
int main() {
    int num_names;
    cout << "Digite o número de nomes: ";
    cin >> num_names;
    string names[num_names];
    cin.ignore(); 
    cout << "Digite os nomes:" << endl;
    for (int i = 0; i < num_names; i++) {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, names[i]);
    }
    selectionSort(names, num_names);
    displayNames(names, num_names);
    return 0;
}
