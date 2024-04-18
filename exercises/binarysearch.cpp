#include <iostream>
#include <vector>

using std::vector;

vector<int> initializeOrderedVector(){
    vector<int> vetor;
    int element, counter = 0;
    std::cout << "Vamos fazer um vetor? Digite o número do elemento a ser adicionado.[Caso deseje parar digite -1]" << std::endl;
    while(true){
      std::cout << "Digite o elemento a ser adicionado: ";
      std::cin >> element;
      if(element == -1){
        break;
        }
        else if(counter == 0){
          vetor.push_back(element);
          counter ++;
        }
      else if(element > vetor.back()){
        vetor.push_back(element);
        std::cout << std::endl;
        }
        else{
          std::cout << "O elemento deve ser maior que o anterior!" <<              std::endl;
        }
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
  std::cout << "Digite o elemento a ser buscado no vetor: ";
  std::cin >> element;
  index = binarySearch(vetor, element, sizeOfVector);

  if(index == -1){
    std::cout << "O elemento não foi encontrado nesse vetor!" << std::endl;
  }
  else{
    std::cout << "O elemento " << element << " foi encontrado no ídice " << index << " do vetor!" << std::endl;
  }

  return 0;
}
