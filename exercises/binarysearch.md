# Exercício 2 - Algoritmo de busca binária(iterativo) 

Dado um vetor A de tamanho N, ordenado de forma crescente:
- Implemente o algoritmo de busca binária na forma iterativa.
  1. A complexidade temporal no pior caso e melhor caso é a mesma que a versão recursiva?
  2. Qual a complexidade espacial e temporal para a versão recursiva e iterativa?
  3. Teste o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.

# O que faz esse algoritmo?

- Dado um vetor com N elementos, e um valor a ser procurado, ele verifica se o elemento passado como referência está dentro do vetor. De que forma? Ele soma o limite superior e inferior e divide por 2 para achar o elemento central do vetor. Dessa forma, consegue fazer a verificação se o elemento central é o elemento requisitado, se não ele vai ser maior ou menor que o meio. Dessa forma, se ele for maior, o meio vai se tornar o limite inferior. Caso contrário, ele vira o limite superior. E assim vai encontrar a posição do elemento requisitado de forma mais rápida e eficaz.

# Respostas
1. Nesse caso, como apesar do funcionamento dos dois casos se dá de maneira diferente, e está se tratando apenas de complexidade temporal, é usual que a sua complexidade seja a mesma, pois:
  - O vetor percorrido está sendo o mesmo;
  - A quantidade de vezes que vai executar o algoritmo vai ser a mesma.
2. Como já descrito na questão 1, ambos os casos tem complexidade temporal igual, que seria *O(n)* para o melhor caso, e *O(log(n))* para o pior caso. Já para a complexidade espacial,como a função apenas pega o vetor por referencia e não faz uma alocação a mais ou algum tipo de recursão, sua complexidade temporal se dá por *O(1)* no pior e no melhor caso. Para sua versão recursiva, a complexidade espacial é linear, pois para o pior caso, a recursão acontecerá muitas vezes e vai sendo alocado na memória, sendo assim, a complexidade é *O(log(n))*.
