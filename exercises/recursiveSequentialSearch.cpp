#include <iostream>
#include <vector>

using std::vector;

vector<int> initializeVector(){
    vector<int> vetor;
    int element;
    std::cout << "Vamos fazer um vetor? Digite o número do elemento a ser adicionado.[Caso deseje parar insira -1]" << std::endl;
    while(true){
        std::cout << "Digite o elemento a ser adicionado: ";
        std::cin >> element;
        if(element == -1){
            break;
        }
        vetor.push_back(element);
        std::cout << std::endl;
        }
    return vetor;
}


int recursiveSequentialSearch(const vector<int>& _vetor, int value, int index){

    if(index >= _vetor.size()){
        return -1;
    }
    else if(_vetor[index] == value){
        return index;
    }
    else{
        return recursiveSequentialSearch(_vetor, value, index + 1);
    }
 
}


int main(){

    int value = 0;
    vector<int> vetor = initializeVector();
    std::cout << "Digite o valor a ser procurado na lista: ";
    std::cin >> value;
    std::cout << std::endl;

    int index = recursiveSequentialSearch(vetor, value, 0);
    if(index == -1){
        std::cout << "Esse valor não está na lista!" << std::endl;
    }
    else{
        std::cout << "O índice pra o valor: " << value << " é o " << index << std::endl;
    }

    return 0;
}
