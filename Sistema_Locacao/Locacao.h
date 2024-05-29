#include <iostream>

using namespace std;

class Locacao{
private:
    int id;
    Imovel imovel;
    Locador locador;
    string data;
    float valor;

public:
    Locacao(): id(0), imovel(Imovel()), locador(Locador()), data(" "), valor(0.0){}
    Locacao(int, Imovel, Locador, string, float );

    int getId() {return this -> id;}
    Imovel getImovel() {return imovel;}
    Locador getLocador() {return locador;}
    string getData() {return this -> data;}
    float getValor() {return this -> valor;}

    void setId(int id) {this -> id = id; }
    void setImovel(Imovel imovel) {this -> imovel = imovel;}
    void setLocador(Locador locador) {this -> locador = locador;}
    void setData(string data) {this -> data = data;}
    void setValor(float valor) {this -> valor = valor;}

    void aumento() {this -> valor = this -> valor * 1.1;}
    void aumento(int perc) {this -> valor = this -> valor + this -> valor * perc/100;}

    void imprimir();
    void leitura();
};

Locacao::Locacao(int id,Imovel imovel, Locador locador, string data, float valor) {
    this -> id = id;
    this -> imovel = imovel;
    this -> locador = locador;
    this -> data = data;
    this -> valor = valor;
}

void Locacao::leitura() {
    cout << "\nImprimir Locacao\n";
    cout << "\nId: ";
    cin >>id;
    this -> imovel.leitura();
    this -> locador.leitura();
    cout << "\nData: ";
    cin >>data;
    cout << "\nValor: ";
    cin >> valor;
}

void Locacao::imprimir() {
    cout << "\nImprimir Locacao\n";
    cout << "\nId: " << id << endl;
    cout << "Data: " << data << endl;
    cout << "Valor: "<< valor << endl;
    this -> imovel.imprimir();
    this -> locador.imprimir();
}