# Exercício 3 - Algoritmo que informa se o vetor está ordenado ou não

- Implemente um algoritmo que verifica se o vetor está ordenado na forma crescente.
  -  Caso o vetor esteja ordenado o algoritmo retorna verdadeiro;
  -  Caso contrário, retorna falso.
- Faça uma análise de complexidade do algoritmo para o pior e melhor caso.

# O que faz?

- Esse algoritmo recebe um vetor e percorre ele todo, verificando sempre se o próximo elemento a ser verificado é menor que o anterior. Caso seja, ele vai retornar falso. Caso percorra todo o vetor e não encontre uma ocorrência disso, ele retorna verdadeiro.

# Resposta
- Nesse algoritmo, o melhor caso seria quando ele fizesse a verificação na primeira repetição e retornasse que a lista nçao está ordendada e nesse caso a complexidade seria *O(1)*. E o pior caso seria em duas situações: A lista está ordenada, ou o último elemento é maior que o penúltimo. Sendo assim, a sua complexidade seria *O(n - 1)* na qual n é o tamanho do vetor repassado.
