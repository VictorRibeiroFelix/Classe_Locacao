#include <iostream>

using namespace std;

class Imovel: public Tipo{
protected:
    int idImovel;
    string rua;
    string bairro;
    string cidadeImovel;
    bool ocupado;

public:
    Imovel(): idImovel(0), rua(" "), bairro(" "), cidadeImovel(" "), ocupado(false), Tipo(){}
    Imovel(int, string, string, string, bool, Tipo);

    int getId(){return this-> idImovel;}
    string getRua(){return this-> rua;}
    string getBairro(){return this-> bairro;}
    string getCidade(){return this-> cidadeImovel;}
    bool getOcupado(){return this-> ocupado;}

    void setId (int idImovel) {this-> idImovel = idImovel;}
    void setRua (string rua) {this-> rua = rua;}
    void setBairro (string bairro) {this-> bairro = bairro;}
    void setCidade (string cidadeImovel) {this-> cidadeImovel = cidadeImovel;}
    void setOcupado (bool ocupado) {this-> ocupado = ocupado;}

    void imprimir();
    void leitura();

};

Imovel::Imovel(int idImovel, string rua, string bairro, string cidadeImovel, bool ocupado, Tipo tipo) {
    this -> idImovel = idImovel;
    this -> rua = rua;
    this -> bairro = bairro;
    this -> cidadeImovel = cidadeImovel;
    this -> ocupado = ocupado;
    this -> Tipo::id = tipo.getId();
    this -> Tipo::descricao = tipo.getDescricao();
}

void Imovel::leitura() {
    cout << "\nImprimir Imovel\n";
    cout << "\nId: ";
    cin >> idImovel;
    cout << "\nRua: ";
    cin >> rua;
    cout << "\nBairro: ";
    cin >> bairro;
    cout << "\nCidade: ";
    cin >> cidadeImovel;
    cout << "\nOcupado: ";
    cin >> ocupado ;
    Tipo::leitura();
}
void Imovel::imprimir() {
    cout << "\nImprimir Imovel\n";
    cout << "\nId: " << idImovel << endl;
    cout << "Rua: " << rua << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Cidade: " << cidadeImovel << endl;
    cout << "Ocupado: " << ocupado << endl;
    Tipo::imprimir();
}



