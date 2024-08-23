#include "../include/menu.hpp"

void createLine(){
  cout << "----------------------------------------------" << endl;
}

void printMenu(){
  createLine();
  cout << "|                COUNTER 2.0                 |" << endl;
  createLine();
  cout << "|1| ADICIONAR TEXTO" << endl;
  createLine();
  cout << "|2| CONTAR PALAVRA" << endl;
  createLine();
  cout << "|3| ATUALIZAR PALAVRA" << endl;
  createLine();
  cout << "|4| REMOVER PALAVRA" << endl;
  createLine();
  cout << "|5| VERIFICAR PALAVRA" << endl;
  createLine();
  cout << "|6| IMPRIMIR CONTEÚDO" << endl;
  createLine();
  cout << "|7| SAIR" << endl;
  createLine();
}
