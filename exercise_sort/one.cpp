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

int main(){
    int len =0;
    cout << "Digita aí qual o tamanho do vetor!" << endl;
    cin >> len;
    vector<int> vetor = initializeRandomVector(len);

    cout << "Os elementos são: ";

    for(int i = 0; i < vetor.size(); i++){
        cout << vetor.at(i);   
        cout << " ";
    }

    return 0;
}
