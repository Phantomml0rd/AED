//MEU DEUS PROFESSOR QUE CÓDIGO PUXADO DE FAZER QUE ISSO KKKK COBRA NA PROVA NÃO

include <iostream>
#include <cstring>

using namespace std;

struct Pessoa {
    int Idade;
    char Nome[30];
    float Altura;
};

void merge(Pessoa arr[], int esq, int meio, int dir, int opcao) {
    int tam_esq = meio - esq + 1;
    int tam_dir = dir - meio;
    Pessoa Esq[tam_esq], Dir[tam_dir];

    for (int i = 0; i < tam_esq; i++)
        Esq[i] = arr[esq + i];
    for (int j = 0; j < tam_dir; j++)
        Dir[j] = arr[meio + 1 + j];

    int i = 0; 
    int j = 0; 
    int k = esq; 

    while (i < tam_esq && j < tam_dir) {
        if (opcao == 1) {
            if (Esq[i].Idade <= Dir[j].Idade) {
                arr[k] = Esq[i];
                i++;
            }
            else {
                arr[k] = Dir[j];
                j++;
            }
        }
        else if (opcao == 2) {
            if (strcmp(Esq[i].Nome, Dir[j].Nome) <= 0) {
                arr[k] = Esq[i];
                i++;
            }
            else {
                arr[k] = Dir[j];
                j++;
            }
        }
        else if (opcao == 3) {
            if (Esq[i].Altura <= Dir[j].Altura) {
                arr[k] = Esq[i];
                i++;
            }
            else {
                arr[k] = Dir[j];
                j++;
            }
        }
        k++;
    }

    while (i < tam_esq) {
        arr[k] = Esq[i];
        i++;
        k++;
    }

    while (j < tam_dir) {
        arr[k] = Dir[j];
        j++;
        k++;
    }
}

void mergeSort(Pessoa arr[], int esq, int dir, int opcao) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        mergeSort(arr, esq, meio, opcao);
        mergeSort(arr, meio + 1, dir, opcao);
        merge(arr, esq, meio, dir, opcao);
    }
}

void exibirArray(Pessoa arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Idade: " << arr[i].Idade << ", Nome: " << arr[i].Nome << ", Altura: " << arr[i].Altura << endl;
    }
}

int main() {
    int tamanho;
    cout << "Digite a quantidade de pessoas: ";
    cin >> tamanho;

    Pessoa pessoas[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cout << "Idade da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].Idade;
        cout << "Nome da pessoa " << i + 1 << ": ";
        cin.ignore();
        cin.getline(pessoas[i].Nome, 30);
        cout << "Altura da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].Altura;
    }

    int opcao;
    cout << "Escolha o campo para ordenar (1 - Idade, 2 - Nome, 3 - Altura): ";
    cin >> opcao;
    mergeSort(pessoas, 0, tamanho - 1, opcao);

    cout << "\nArray ordenado:" << endl;
    exibirArray(pessoas, tamanho);

    return 0;
}
