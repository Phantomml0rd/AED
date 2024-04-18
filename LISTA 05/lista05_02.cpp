#include <iostream>
#include <string>
using namespace std;

void turn(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int division(string& str, int l, int r) {
    char pivo = str[r]; 
    int i = l - 1; 

    for (int j = l; j <= r - 1; j++) {
        if (str[j] <= pivo) {
            i++;
            turn(str[i], str[j]); 
        }
    }
    turn(str[i + 1], str[r]); 
    return (i + 1); 
}

void quicksort(string& str, int l, int r) {
    if (l < r) {
        int indice_divisao = division(str, l, r);
        quicksort(str, l, indice_divisao - 1); 
        quicksort(str, indice_divisao + 1, r); 
    }
}

int main() {
    string str;
    cout << "Insira a string: ";
    getline(cin, str);

    int tamanho = str.size();
    quicksort(str, 0, tamanho - 1); 

    cout << "String ordenada: " << str << endl;

    return 0;
}
