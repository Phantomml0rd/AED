#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho do vetor: ";
    cin >> N;
    int X[N];
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "X[" << i << "]: ";
        cin >> X[i];
    }
    int menor = X[0];
    int posicao = 0;
    for (int i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];  
            posicao = i;  
        }
    }
    cout << "Menor elemento do vetor: " << menor << endl;
    cout << "Posição do menor elemento: " << posicao << endl;

    return 0;
}
