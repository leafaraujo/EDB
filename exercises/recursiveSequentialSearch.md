# Exercícío 1 - Busca sequencial (recursiva)

Dado um vetor A de tamanho N, com valores inteiros e um valor inteiro X.
- Implemente um algoritmo de busca sequencial recursivo que retorna o indice do vetor caso X seja encontrado e -1 caso contrário.

1. Qual a complexidade temporal de busca no pior caso? Demonstre matematicamente.
2. A complexidade no pior caso é a mesma da versão iterativa?
3. Teste o algoritmo para diferentes casos de entrada, variando o tamanho e conteúdo do vetor.

# O que faz?
- Esse algoritmo recebe um vetor e busca um elemento dentro dele, de forma iterativa, retornando seu índice.

# Respostas

1. A complexidade temporal para o pior caso é descrita por *O(n)* e pode ser provada por prova direta:
   - Nesse caso, é intuitivo que nesse laço de repetição, cada elemento do vetor será percorrido apenas uma vez durante cada chamada recursiva, logo:
       - Caso o elemento que está sendo procurado esteja no primeiro espaço do vetor de tamanho N, segue que *O(n) = 1* pois só vai verificar o laço for uma vez;
       - Caso o elemento seja o segundo, a sua complexidade será *O(n) = 2* pois serão necessários dois laços a serem percorridos. Sendo assim, pode se perceber que esse laço vai ser percorrido até encontrar o elemento, ou que o valor do índice repasssado seja maior ou igual o vetor. Sendo assim, é intuitivo que sua complexidade temporal se dá por *O(n)* onde n é o tamanho do vetor a ser percorrido

2. Como, apesar de ser recursivo, esse algoritmo também se trata de percorrer um vetor de forma iterativa, nesse caso a sua complexidade é a mesma.
