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

int largElement(vector<int> &vec, int len){
  int max = vec[0];
  for(int i = 1; i < len; i++){
    if(max < vec[i]){
      max = vec[i];
    }
  }
  return max;
}

void countSort(vector<int> &vec, int len, int keyMax){
  vector<int> counters(keyMax + 1, 0);
    
  for(int i = 0; i < len; i++){
    counters[vec[i]]++;
  }

  for(int j = 1; j <= keyMax; j++){
    counters[j] += counters[j - 1];
  }
  
  vector<int> auxSorted(len);
  for(int k = len - 1; k >= 0; k--){
    auxSorted[counters[vec[k]]-1] = vec[k];
    counters[vec[k]] --;
  }

  for(int i = 0; i < len; i++){
    vec[i] = auxSorted[i];
  }
}

int main(){

  int len = 0, largest;
  cout << "Digita aí qual o tamanho do vetor!" << endl;
  cin >> len;
  vector<int> vetor = initializeRandomVector(len);
  cout << "Os elementos eram: ";

  for(int i = 0; i < vetor.size(); i++){
    cout << vetor.at(i);   
    cout << " ";
  }
  cout << endl;
  largest = largElement(vetor, len);
  countSort(vetor, len, largest);
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
