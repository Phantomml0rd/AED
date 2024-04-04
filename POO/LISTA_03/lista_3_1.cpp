#include <iostream>
#include <string>
using namespace std;

class Veiculo {
 public:
    Veiculo (int peso_, int ano_, string marca_, string cor_){
      peso=peso_;
      ano=ano_;
      marca=marca_;
      cor=cor_;
    }  
void setPeso(int peso_){
  peso=peso_;
}
void setAno(int ano_){
  ano=ano_;
}
void setMarca(string marca_){
  marca=marca_;
}
void setCor(string cor_){
  cor=cor_;
}
int getPeso(){
  return peso;
}
int getAno(){
  return ano;
}
string GetMarca(){
  return marca;
}
string getCor(){
  return cor;
}
private:
int peso;
int ano;
string marca;
string cor;

};
  
int main (){
  Veiculo veiculo(1500, 1990, "Mitsubishi", "Prata");
  cout<< "Ano:" << veiculo.getAno() << endl;
  cout<< "Peso:" << veiculo.getPeso() << endl;
  cout<< "Marca:"<< veiculo.GetMarca() << endl;
  cout<< "Cor:" << veiculo.getCor() << endl;
veiculo.setAno(2005);
  cout<< "Exibindo informações sobre o veiculo após alteações" << veiculo.getAno()<<endl;
  cout<< "Ano:"<< veiculo.getAno() << endl;
  
  
  return 0;
  
}
