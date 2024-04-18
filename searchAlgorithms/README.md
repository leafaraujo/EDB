# Possíveis estratégias de busca

- Busca aleatória
  - Pode não garantir solução, se depender da iplementação. Por isso, precisam ser colocadas verificações.
- Busca sequencial;
- Busca binária.

  # Busca aleatória
  ```C++
  #include <iostream>

  int buscaAleatoria(int* vetor, int tamanho, int chave){
    int posicao = -1;

    for(int i =0; i < tamanho; i++)
      int indiceAleatorio = geraIndiceAleatorio(tamanho)

      if(vetor[indiceAleatorio] == chave){
        posicao = indiceAleatorio;
        break;
    }

    return posicao;
  }
  ```

  - Essa função pode gerar o mesmo índice ou até mesmo não gerar algum dos índices, e assim ele não verificaria todos os itens do vetor. A solução seria armazenar os índices.
  - Se utiliza quando você tem poucas informações sobre o que está sendo procurado;
  - rand() % tamanho == gerar um número aleatório em uma faixa de valores.
