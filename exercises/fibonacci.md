# Exercício 4 - Fibonnaci (iterativo)

- Implemente o algoritmo iterativo de fibonacci. De modo aretornar o valor inteiro X na posição N da sequência de fibonacci.
  - Qual a complexidade do algoritmo no pior caso?
  - Compare as complexidades do algoritmo iterativo e da versão recursiva apresentada a seguir:
  
  ```C++
  int fibonnaci(int num){
    if( num <= 1){
      return 1;
    }
  int x = fibonnaci(n - 1) + fibonnaci(n-2);
  return x;
  ```
  
    - É possível implementar uma versão recursiva mais eficiente em termos de complexidade temporal?

# Respostas

1. Para o pior caso, esse algoritmo, por executar uma recursão dupla tem complexidade de O(2^n). Porque cada chamada do algoritmo chama outras duas, e assim percebe-se que é uma potencia de 2.
2. A versão interativa tem uma implementação semelhante a essa.
    
    ```C++
    int fibonnaciIterativo(int n){

    int numOne = 1, numTwo = 1, numResult;
    for(int i = 0; i <= n; i++){
        numResult = numOne + numTwo;
        numOne = numTwo;
        numTwo = numResult;
        }
    return numResult;
    }
    ```
- E nesse caso, pode-se observar que sua complexidade *O(n)* na qual n é a entrada dada pelo usuário e sendo assim, a sua complexidade e custo temporal é menos que a versão recursiva apresentada.

3. Sim, existe um algoritmo de fibonnaci mais eficiente em questão de complexidade temporal, um exemplo disso seria o seguinte:

    ```C++
    int fibonnaci(int n1, int n2, int counter, int index){
    if(index <= 1){
      return 1;
    }
    int numAuxiliar = n1 + n2;
    counter ++;
    if(index == counter){
      return numAuxiliar;
    }
    else{
      return fibonnaci(n2, numAuxiliar, index, counter);
    ```

  - Esse algoritmo seria um exemplo de uma recursão de fibbonaci atualizada. Note que sua complexidade é *O(n)* em quaisquer entrada, com n == index.
    - Segue inicialização do algoritmo na função main:
      ```C++
      int main(){
        std::cout << "Digite qual número da sequência de fibbonaci que deseja descobrir: ";
        std::cin >> index;
        std::cout << std::endl;
        x = fibbonaci(1, 1, 1, index);
        std::cout << "O número que se encontra na posição " << index << " da sequência eh o " << x << std::endl;
      }

  
