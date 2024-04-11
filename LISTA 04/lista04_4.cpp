#include <iostream>
using namespace std;

int peqbin (int val){
int vector [10] =  {1,2,3,4,5,6,7,8,9,10};
int L = 0;
int R = 9;
  while (L<=R){
    int M = (L+R)/2;
    if (val == vector[M])
      return M;
  else if (val < vector[M])
     L = M +1;
  else 
     R = M -1;
  }
  return -1;
  
}

int main(){
 int posicao;
  cout <<"possuimos um vetor de valor 10 numerado de 1 a 10 digite sua escolha: " <<endl;
  cin >> posicao;
  cout<< "o valor da posicao é:" << peqbin(posicao) <<endl;
  return 0;
}
