#include <iostream>
#include <vector>
#include <random>

using namespace std;

vector<int> initializeRandomVector(int len){
    vector<int> vetor;
    int randNum = 0;
    random_device rand;
    mt19937 mt(rand());
    uniform_int_distribution<int> dist(0, len);
    
    for(int i = 0; i < len; i++){
        randNum = dist(mt);
        vetor.push_back(randNum);
    }

return vetor;
}

bool isOrdered(const vector<int> &_vetor){
  for(int i = 0; i < _vetor.size() - 2; i++){
    if(_vetor[i] > _vetor [i+1]){
      return false;
    }
  }
  return true;
}

void merge(vector<int> &vec, int inicio, int meio, int fim) {
  int subArrayOne = meio - inicio + 1;
  int subArrayTwo = fim - meio;

  vector<int> left(subArrayOne);
  vector<int> right(subArrayTwo);

  for(int i = 0; i < subArrayOne ; i++){
    left[i] = vec[inicio + i];
  }
  for(int j = 0; j < subArrayTwo; j++){
    right[j] = vec[meio + 1 + j];
  }

  int indexOne = 0, indexTwo = 0, indexMerge = inicio;

  while(indexOne < subArrayOne && indexTwo < subArrayTwo){
    if(left[indexOne] <= right[indexTwo]){
      vec[indexMerge] = left[indexOne];
      indexOne++;
    }
    else{
      vec[indexMerge] = right[indexTwo];
      indexTwo ++;
    }
    indexMerge ++;
  }

  while(indexOne < subArrayOne){
    vec[indexMerge] = left[indexOne];
    indexMerge++;
    indexOne++;
  }

  while(indexTwo < subArrayTwo){
    vec[indexMerge] = right[indexTwo];
    indexMerge++;
    indexTwo++;
  }

}


void mergeSort(vector<int> &vec, int inicio, int fim){
  int meio;
  if(inicio < fim){
    meio = (inicio+fim)/2;
    mergeSort(vec, inicio, meio);
    mergeSort(vec, meio + 1, fim);
    merge(vec, inicio, meio, fim);

  }
}

int main(){

    int len = 0;
    cout << "Digita aí qual o tamanho do vetor!" << endl;
    cin >> len;
    vector<int> vetor = initializeRandomVector(len);
    cout << "Os elementos eram: ";

    for(int i = 0; i < vetor.size(); i++){
        cout << vetor.at(i);   
        cout << " ";
    }
    cout << endl;

    mergeSort(vetor,0, len - 1);
    cout << "Depois de ordenados os elementos são: ";

    for(int i = 0; i < vetor.size(); i++){
        cout << vetor.at(i);   
        cout << " ";
    }
    cout << endl;

    if(isOrdered(vetor)){
      cout << "O vetor está ordenado!" << endl;
    }
    else{
      cout << "O vetor não está ordenado" << endl;
    }

    return 0;
}
