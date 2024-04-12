#include <iostream>
using namespace std;

int peqsent(int val){
  int vector[10] = {1,2,3,4,5,6,7,8,9,10};
  for (int i = 0; i < 10; i++){
    if (vector[i] == val){
      return i;
    }
  }
  return -1;
}
int main (){
int posicao;
  cout << "informe o vetor escolhido de 0 a 10:" << endl;
  cin >> posicao;
  cout << "a posição do vetor é: " << peqsent(posicao) << endl;
  return 0;
  
  
}
