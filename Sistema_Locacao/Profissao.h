#include <iostream>

using namespace std;

class Profissao{
protected:
    int id;
    string descricao;

public:
    Profissao(): id(0), descricao(" "){}
    Profissao(int, string);

    int getId() {return this-> id;}
    string getDescricao() {return this-> descricao;}

    void setId (int id) {this -> id = id;}
    void setDescricao (string descricao) {this -> descricao = descricao;}

    void leitura();
    void imprimir();
};

Profissao::Profissao(int id, string descricao) {
    this -> id = id;
    this -> descricao = descricao;
}

void Profissao::leitura() {
    cout << "\nLer Profissao\n";
    cout << "\n Id :";
    cin >> id;
    cout << "\nDescricao: ";
    cin >> descricao;
}

void Profissao::imprimir() {
    cout << "\nImprimir Profissao\n";
    cout << "\nId :"<< id << endl;
    cout <<"Descricao: " << descricao << endl;
}

