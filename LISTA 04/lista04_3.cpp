#include <iostream>
using namespace std;

int peqseq(int val){
int vector[10] = {1,2,3,4,5,6,7,8,9,10};
int indice = 0;
  
  while (indice < 10 ){
    if (vector[indice] == val){
      return indice;
    }
    indice++;
  }
  return -1;
}
int main(){
  int posição;
  cout<< "possuimos um vetor de valor 10 numerado de 1 a 10 digite sua escolha: ";
  cin>> posição;
  cout<< "o valor da posição é: " << peqseq(posição);
    

      return 0;
  }

