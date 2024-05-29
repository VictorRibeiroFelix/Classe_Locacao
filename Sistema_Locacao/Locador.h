#include <iostream>

using namespace std;

class Locador: public Profissao{
protected:
    int idLocador;
    string nome;
    string cidade;
    string estado;
    int idade;
    float salario;

public:
    Locador():  idLocador(0), nome(" "), cidade(" "), estado(" "), idade(0), salario(0.0), Profissao(){};
    Locador(int, string, string, string, int, float, Profissao);

    int getId() {return this -> idLocador;}
    string getNome() {return this -> nome;}
    string getCidade() {return this -> cidade;}
    string getEstado() {return this -> estado;}
    int getIdade() {return this -> idade;}
    float getSalario() {return this -> salario;}

    void setId (int idLocador) {this-> idLocador = idLocador;}
    void setNome (string nome) {this-> nome = nome;}
    void setCidade (string cidade) {this-> cidade = cidade;}
    void setEstado(string estado) {this-> estado = estado;}
    void setIdade(int idade) {this-> idade = idade;}
    void setSalario(float salario) {this-> salario = salario;}

    void imprimir();
    void leitura();
};

Locador::Locador(int idLocador, string nome, string cidade, string estado, int idade, float salario, Profissao profissao) {
    this -> idLocador = idLocador;
    this -> nome = nome;
    this -> cidade = cidade;
    this -> estado = estado;
    this -> idade = idade;
    this -> salario = salario;
    this -> Profissao::id = profissao.getId();
    this -> Profissao::descricao = profissao.getDescricao();
}

void Locador::leitura() {
    cout << "\nLer Locador\n";
    cout << "\n Id :";
    cin >> idLocador;
    cout << "\nNome: ";
    cin >> nome;
    cout << "\nCidade: ";
    cin >> cidade;
    cout << "\nEstado: ";
    cin >> estado;
    cout << "\nIdade: ";
    cin >> idade;
    cout << "\nSalario: ";
    cin >> salario;
    Profissao::leitura();
}

void Locador::imprimir() {
    cout << "\nImprimir Locador\n";
    cout << "\nId: " << idLocador << endl;
    cout << "Nome: " << nome << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
    Profissao::imprimir();
}

