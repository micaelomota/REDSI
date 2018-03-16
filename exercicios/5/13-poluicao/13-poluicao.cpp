#include <iostream>
#include "IndiceAccao.h"
#include "Hospital.h"
#include "GestaoHospitais.h"

using namespace std;

int main() {
  Hospital hsj = Hospital("HospitalJoao", 0.3);
  // cout << hsj.getNome() << "  " << hsj.getIndice();

  GestaoHospitais gestao = GestaoHospitais();
  gestao.addHospital(hsj);
  gestao.readHospital();
  // gestao.readManyHospitais();
  cout << "Numero de hospitais: " << gestao.getNumHospitais() << endl;

  // cout << "\nEntre com o nome do hospital a pesquisar: ";
  // string nome;
  // cin >> nome;

  Hospital achei = gestao.findHospital("HospitalJoao");
  cout << "\nNome " << gestao.getHospitais()[0].getNome();

  if(!achei.getNome().empty()){
    cout << achei.getNome();
  } else {
    cout << "Hospital não encontrado! \n";
  }

  return 0;
}
