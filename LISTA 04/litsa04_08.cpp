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
    int maior = X[0];
    int posicao = 0;
    for (int i = 1; i < N; i++) {
       
        if (X[i] > maior) {
            maior = X[i]; 
            posicao = i;  
        }
    }
    cout << "Maior elemento do vetor: " << maior << endl;
    cout << "Posição do maior elemento: " << posicao << endl;

    return 0;
}
