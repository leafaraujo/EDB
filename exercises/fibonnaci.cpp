# include <iostream>
using namespace std;

int fibonnaciIterativo(int n){

int numOne = 1, numTwo = 1, numResult;
for(int i = 0; i <= n; i++){
    numResult = numOne + numTwo;
    numOne = numTwo;
    numTwo = numResult;
    }
return numResult;
}

int main(){
  int number, position;
  cout << "---------------------------------------- Fibonnaci Simulator ----------------------------------------" << endl;
  cout << "Olá, digite um número N e iremos encontrar qual valor está nessa posição na sequência de fibbonaci :p";
  cin >> position;
  cout << endl;
  
  number = searchFibonnaci(position)
  cout << "O número na posição " << position << " é o " << number << endl;
  return 0;
}
