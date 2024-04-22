#include <iostream>
#include <vector>

using std::vector;

vector<int> initializeVector(){
  vector <int> vetor;
  int element;
  std::cout << "Digite os elementos do vetor para construirmos um![Caso deseje parar insira -1]}" << std::endl;
  while(true){
    std::cout << "Adicione o elemento: ";
    std::cin >> element;
    std::cout << std::endl;
    if(element == -1){
      break;
    }
    else{
      vetor.push_back(element);
    }
  }
  return vetor;
}

bool isOrdered(const vector<int>& _vetor){
  for(int i = 0; i < _vetor.size() - 2; i++){
    if(_vetor[i] > _vetor [i+1]){
      return false;
    }
  }
  return true;
}

int main(){
  vector <int> vetor = initializeVector();

  if(isOrdered(vetor)){
    std::cout << "O vetor está ordenado!" << std::endl;
  }
  else{
    std::cout<<"O vetor não está ordenado!" << std::endl;
  }
    
  return 0;
}
