#include <iostream>
using namespace std;
int peqseq (int val){
int vector[10] = {1,2,3,4,5,6,7,8,9,10};
int comparacao = 0;
  for (int i = 0; i < 10; i++){
    if (vector[i] == val) {
      return comparacao;
    }
    comparacao++;
  }
  return comparacao;
}
int pesqbin (int val){
int vector[10] = {1,2,3,4,5,6,7,8,9,10};
int R = 9;
int L = 0;
int comparacao = 0;
  while (L<R){
    int M = (L+R)/2;
  if (vector[M] == val){
    return comparacao;
  }
  else if (vector[M] < val){
    L = M + 1;
  }
  else {
    R = M - 1;
  }
  comparacao++;
  
 }
  return comparacao;
}

int main (){
  int val = 9; 
  int comparacao_seq = peqseq(val);
  int comparacao_bin = pesqbin(val);
  cout<< "numero de comparações na pesquisa sequencial: " << comparacao_seq <<endl;
  cout<<"numero de comparações na pesquisa binaria:" << comparacao_bin <<endl;
  if (comparacao_seq < comparacao_bin){
    cout<< "a pesquisa sequencial é a que faz menos pesquisas" <<endl;
  }
  else{
    cout<< "a pesquisa binaria é a que faz mais pesquisas" <<endl;
  }
  

  return 0;
}
