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
3. | INPUT I |  INPUT II | OUTPUT |
   |---------|-----------|--------|
   | 9 8 7 1 |    N/A    |  O vetor não está ordenado! |
   | 1 2 3 4 5 6 7 8 9 10 11 | 6 | O elemento 6 foi encontrado no índice 5 do vetor! |
   | 10 20 30 40 50 60 70 80 99 100 | 99 | O elemento 99 foi encontrado no índice 8 do vetor! |
   | 11 22 33 44 55 66 77 88 99 1110 | 10 | O elemento não foi encontrado nesse vetor! |
   | 1 1 2 3 5 8 13 21 34 55 89 | 21 | O elemento 21 foi encontrado no índice 7 do vetor! |
   | 1 2 5 8 12 15 23 31 40 45 54 55 57 61 64 67 68 70 79 80 84 85 89 90 91 92 95 97 99 | 97 | O elemento 97 foi encontrado no índice 27 do vetor! |
   | 10 20 30 49 74 7 74 78 80 81 83 85 86 87 89 90 | N/A | O vetor não está ordenado! |
