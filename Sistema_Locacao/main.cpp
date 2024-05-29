#include "Tipo.h"
#include "Profissao.h"
#include "Imovel.h"
#include "Locador.h"
#include "Locacao.h"

using namespace std;

int main() {

   Tipo tipo1;
   tipo1.leitura();
   tipo1.imprimir();
   tipo1.setId(40);
   cout <<"\nId novo: " << tipo1.Tipo::getId() << endl;

   Imovel imo1(60, "Alves Oliveira", "Alvorada", "Sao Paulo", true, tipo1);
   imo1.imprimir();
   imo1.setId(12);
   imo1.imprimir();

    cout << endl;

   Profissao prof;
   prof.leitura();
   prof.imprimir();
   prof.setId(23);
   prof.imprimir();

    cout << endl;

   Locador lo1(23, "Rodrigo", "Assis", "SP", 35, 4500.98, prof);
   lo1.imprimir();
   lo1.setNome("Vitor");
   lo1.imprimir();

    cout << endl;

  Locacao loca1(21, imo1, lo1, "4 de Maio 2023", 80000.0);
  loca1.imprimir();
  loca1.aumento();
  loca1.imprimir();

    cout << endl;

   Locacao loca2;
   loca2.setId(21);
   loca2.setData("2 de Agosto 2023");
   loca2.setValor(100000);
   loca2.imprimir();
   loca2.aumento(25);
   loca2.imprimir();
   loca2.setData("10 de Dezembro 2023");
   cout << "\nData nova: " << loca2.Locacao::getData();

    return 0;
}
