#include <iostream>
#include <vector>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;

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

  auto begin = steady_clock::now();
  mergeSort(vetor, 0, len - 1);
  auto end = steady_clock::now();
  
  duration<double> timeSpent = end - begin;
  auto timeSpentMs = chrono::duration_cast<chrono::milliseconds> (timeSpent);
  auto timeSpentMc = chrono::duration_cast<chrono::microseconds>(timeSpent);
  auto timeSpentNs = chrono::duration_cast<chrono::nanoseconds>(timeSpent);

  cout << "Tempos de execução" << endl;
  cout << "Segundos: " << timeSpent.count() << endl;
  cout << "Milisegundos: " << timeSpentMs.count() << endl;
  cout << "Microsegundos: " << timeSpentMc.count() << endl;
  cout << "Nanosegundos: " << timeSpentNs.count() << endl;
  
  if(isOrdered(vetor)){
    cout << "O vetor está ordenado!" << endl;
  }
  else{
    cout << "O vetor não está ordenado" << endl;
  }

  return 0;
}
