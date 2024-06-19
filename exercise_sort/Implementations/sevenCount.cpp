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
  largest = largElement(vetor, len);
  
  auto begin = steady_clock::now();
  countSort(vetor, len, largest);
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
