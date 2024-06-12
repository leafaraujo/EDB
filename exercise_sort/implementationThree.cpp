#include <iostream>
#include <vector>
#include <random>
#include <chrono>

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

void selectionSort(vector<int> &vec){
  int len = vec.size();
  int auxiliar = 0;

  for(int i = 0; i < len - 1; i++){
    int minIndex = i;
    for(int j = i+1; j < len ; j++){
      if(vec[j] < vec[minIndex]){
        minIndex = j;
      }
    }

    if(minIndex != i){
      auxiliar = vec[minIndex];
      vec[minIndex] = vec[i];
      vec[i] = auxiliar;
    }
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

    selectionSort(vetor);
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
