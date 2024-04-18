# Exercício 4 - Fibonnaci (iterativo)

- Implemente o algoritmo iterativo de fibonacci. De modo aretornar o valor inteiro X na posição N da sequência de fibonacci.
  - Qual a complexidade do algoritmo no pior caso?
  - Compare as complexidades do algoritmo iterativo e da versão recursiva apresentada a seguir:
  ´´´C++
  int fibonnaci(int num){
    if( num <= 1){
      return 1;
    }
  int x = fibonnaci(n - 1) + fibonnaci(n-2);
  return x;
  ´´´
    - É possível implementar uma versão recursivamais eficiente em termos de complexidade temporal?
  
