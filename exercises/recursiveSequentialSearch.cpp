#include <iostream>
#include <vector>
#include <sstream>

using std::vector;

vector<int> initializeVector(){
  vector<int> vetor;
  std::string input;
  std::cout << "Digite os valores separados por espaço: ";
  std::getline(std::cin, input);

  std::stringstream ss(input);
  int valor;

  while (ss >> valor) {
      vetor.push_back(valor);
  }
    return vetor;
}


int recursiveSequentialSearch(const vector<int>& _vetor, int value, int index){

    if(index >= _vetor.size()){
        return -1;
    }
    else if(_vetor[index] == value){
        return index;
    }
    else{
        return recursiveSequentialSearch(_vetor, value, index + 1);
    }

}


int main(){

    int value = 0;
    vector<int> vetor = initializeVector();
    std::cout << "Digite o valor a ser procurado na lista: ";
    std::cin >> value;
    std::cout << std::endl;

    int index = recursiveSequentialSearch(vetor, value, 0);
    if(index == -1){
        std::cout << "Esse valor não está na lista!" << std::endl;
    }
    else{
        std::cout << "O índice pra o valor: " << value << " é o " << index << std::endl;
    }

    return 0;
}
