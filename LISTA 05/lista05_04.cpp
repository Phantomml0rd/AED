#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void exibirAlturas(float alturas[], int n) {
    cout << "Alturas geradas:" << endl;
    for (int i = 0; i < n; i++) {
        cout << alturas[i] << " metros" << endl;
    }
}
void bubbleSort(float alturas[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (alturas[j] > alturas[j + 1]) {
                float temp = alturas[j];
                alturas[j] = alturas[j + 1];
               alturas[j + 1] = temp;
         }
        }  
    }
}
int main() {
    srand(time(NULL));
    const int num_alturas = 100;
    float alturas[num_alturas];
  
    for (int i = 0; i < num_alturas; i++) {
        alturas[i] = (rand() % 200) / 100.0 + 1.0; 
    }
    exibirAlturas(alturas, num_alturas);
    bubbleSort(alturas, num_alturas);
    cout << "\nAlturas ordenadas:" << endl;
    exibirAlturas(alturas, num_alturas);

    return 0;
}
