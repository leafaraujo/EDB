#include "include/menu.hpp"
#include "include/hash.hpp"
#include <sstream>
#include <vector>

int main(){
  Hash hash;
  bool keepGoin = true;
  string word;
  int userInput, count;
  while(keepGoin){
    printMenu();
    cout << "Digite o comando desejado: ";
    cin >> userInput;
    if(userInput == 1){
      cout << "Digite a palavra a ser adicionada: ";
      cin >> ws;
      getline(cin, word);
      cin.clear();
      hash.addWord(word);
    }
    else if(userInput == 2){
      cout << "Digite a palavra a ser contada: ";
      cin >> ws;
      getline(cin, word);
      cin.clear();
      hash.countWord(word);
    }
    else if(userInput == 3){
      cout << "Digite a palavra a ser atualizada: ";
      cin >> ws;
      getline(cin, word);
      cin.clear();
      cout << "Agora digite a quantidade de vezes em que ela aparece: ";
      cin >> count;
      cout << endl;
      hash.updateWord(word, count);
    }
    else if(userInput == 4){
      cout << "Digite a palavra a ser removida: ";
      cin >> ws;
      getline(cin, word);
      cin.clear();
      hash.removeWord(word);
    }
    else if(userInput == 5){
      cout << "Digite a palavra a ser buscada: ";
      cin >> ws;
      getline(cin, word);
      cin.clear();
      hash.searchWord(word);
    }
    else if(userInput == 6){
      hash.printTable();
    }
    else if(userInput == 7){
      cout << "Encerrando o programa." << endl;
      cout << "10000000 projetos pra fazer, eu to maluco" << endl;
      keepGoin = false;
    }
  }
}
