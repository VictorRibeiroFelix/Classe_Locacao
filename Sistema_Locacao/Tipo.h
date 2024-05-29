#include <iostream>

using namespace std;

class Tipo{
protected:
    int id;
    string descricao;

public:
    Tipo(): id(0), descricao(" "){}
    Tipo(int, string);

    int getId() {return this -> id;}
    string getDescricao() {return this -> descricao;}

    void setId(int id) {this -> id = id;}
    void setDescricao(string descricao) {this -> descricao = descricao;}

    void leitura();
    void imprimir();
};

Tipo::Tipo(int id, string descricao) {
    this -> id = id;
    this -> descricao = descricao;
}

void Tipo::leitura() {
    cout << "\nLer Tipo\n";
    cout << "\n Id: ";
    cin >> id;
    cout << "Descricao: ";
    cin >> descricao;
}

void Tipo::imprimir() {
    cout <<"\nImprimir Tipo\n";
    cout << "\nId: " << id << endl;
    cout << "Descricao: " << descricao << endl;
}