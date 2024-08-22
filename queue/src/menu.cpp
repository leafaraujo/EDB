#include "../include/menu.hpp"

void createLine(){
  cout << "----------------------------------------------" << endl;
}

void printMenu(){
  createLine();
  cout << "|                     SUS                    |" << endl;
  createLine();
  cout << "|1| ADICIONAR" << endl;
  createLine();
  cout << "|2| ATENDER" << endl;
  createLine();
  cout << "|3| VERIFICAR" << endl;
  createLine();
  cout << "|4| SAIR" << endl;
  createLine();
}
