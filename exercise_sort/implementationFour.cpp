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
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = vec[inicio + i];
    for (int j = 0; j < n2; j++)
        right[j] = vec[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            vec[k] = left[i];
            i++;
        } else {
            vec[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = right[j];
        j++;
        k++;
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
