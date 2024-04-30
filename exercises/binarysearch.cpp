#include <iostream>
#include <vector>
#include <sstream>

using std::vector;

bool isOrdered(const vector<int>& _vetor){
  for(int i = 0; i < _vetor.size() - 2; i++){
    if(_vetor[i] > _vetor [i+1]){
      return false;
    }
  }
  return true;
}

vector<int> initializeOrderedVector(){
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

int binarySearch(const vector<int>& _vetor, int element, int size){
  int limInferior = 0, limSuperior = size - 1, meio;
  while(limInferior <= limSuperior){
    meio = (limInferior + limSuperior) / 2;
    if(_vetor[meio] == element){
      return meio;
    }
    else if(_vetor[meio] < element){
      limInferior = meio + 1;
    }
    else{
      limSuperior = meio - 1;
    }
  } 
  return -1;
}

int main(){
  vector<int> vetor = initializeOrderedVector();
  int element = 0, index;
  int sizeOfVector = vetor.size();
  if(isOrdered(vetor)){
    std::cout << "Digite o elemento a ser buscado no vetor: ";
    std::cin >> element;
    index = binarySearch(vetor, element, sizeOfVector);

    if(index == -1){
      std::cout << "O elemento não foi encontrado nesse vetor!" << std::endl;
    }
    else{
      std::cout << "O elemento " << element << " foi encontrado no ídice " << index << " do vetor!" << std::endl;
    }
  }
  else{
    std::cout << "O vetor não está ordenado!" << std::endl;
  }
  return 0;
}
