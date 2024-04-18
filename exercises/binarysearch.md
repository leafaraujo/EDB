# Exercício 2 - Algoritmo de busca binária(iterativo) 

Dado um vetor A de tamanho N, ordenado de forma crescente:
- Implemente o algoritmo de busca binária na forma iterativa.
  1. A complexidade temporal no pior caso e melhor caso é a mesma que a versão recursiva?
  2. Qual a complexidade espacial e temporal para a versão recursiva e iterativa?
  3. Teste o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.

# O que faz esse algoritmo?

- Dado um vetor com N elementos, e um valor a ser procurado, ele verifica se o elemento passado como referência está dentro do vetor. De que forma? Ele soma o limite superior e inferior e divide por 2 para achar o elemento central do vetor. Dessa forma, consegue fazer a verificação se o elemento central é o elemento requisitado, se não ele vai ser maior ou menor que o meio. Dessa forma, se ele for maior, o meio vai se tornar o limite inferior. Caso contrário, ele vira o limite superior. E assim vai encontrar a posição do elemento requisitado de forma mais rápida e eficaz.
