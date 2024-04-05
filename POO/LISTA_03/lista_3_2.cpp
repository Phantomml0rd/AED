#include <iostream>
#include <string>

using namespace std;

class Pessoa {
protected:
    string nome;

public:
    Pessoa(string nome_) : nome(nome_) {}

    string getNome() const {
        return nome;
    }
};

class Empregado : public Pessoa {
protected:
    float salarioBase;

public:
    Empregado(string nome_, float salarioBase_) : Pessoa(nome_), salarioBase(salarioBase_) {}

    virtual float calcularSalario() const {
        return salarioBase;
    }
};

class Vendedor : public Empregado {
private:
    float valorVendas;
    float comissao;

public:
    Vendedor(string nome_, float salarioBase_, float valorVendas_, float comissao_)
        : Empregado(nome_, salarioBase_), valorVendas( valorVendas_), comissao(comissao_) {}

    virtual float calcularSalario() const override {
        return salarioBase + (valorVendas * comissao / 100.0);
    }
};

int main() {
    Vendedor vendedor("Pedro", 5035.40, 15.500, 2.500); 

    float salarioVendedor = vendedor.calcularSalario();

    cout << "Nome do Vendedor: " << vendedor.getNome() << endl;
    cout << "Salario do Vendedor: R$ " << salarioVendedor << endl;

    return 0;
