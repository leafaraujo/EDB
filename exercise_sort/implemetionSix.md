# Testes para o algoritmo de verificação da ordenação

## Selection Sort
|INPUT|OUTPUT I|OUTPUT II|OUTPUT III|
|-----|--------|---------|----------|
|10   | Os elementos eram: 1 9 7 2 3 7 4 5 9 7 | Depois de ordenados os elementos são: 1 1 2 3 4 6 6 9 9 10 | O vetor está ordenado!|
|15   | Os elementos eram: 7 1 1 4 12 13 4 12 6 12 13 3 8 6 15 | Depois de ordenados os elementos são: 1 1 3 4 4 6 6 7 8 12 12 12 13 13 15 | O vetor está ordenado!|
|20   | Os elementos eram: 1 8 12 4 20 19 10 2 7 17 10 6 15 6 13 3 3 0 5 18 | Depois de ordenados os elementos são: 0 1 2 3 3 4 5 6 6 7 8 10 10 12 13 15 17 18 19 20 | O vetor está ordenado!|
|25   | Os elementos eram: 0 16 13 11 0 3 11 22 17 3 20 0 11 0 2 14 17 10 8 11 3 2 12 25 11 | Depois de ordenados os elementos são: 0 0 0 0 2 2 3 3 3 8 10 11 11 11 11 11 12 13 14 16 17 17 20 22 25 | O vetor está ordenado!|
|30   | Os elementos eram: 5 15 7 30 12 14 12 7 7 17 2 20 3 30 3 24 28 12 11 11 20 10 17 7 8 24 17 10 30 23 | Depois de ordenados os elementos são: 2 3 3 5 7 7 7 7 8 10 10 11 11 12 12 12 14 15 17 17 17 20 20 23 24 24 28 30 30 30 | O vetor está ordenado!|

## Merge Sort
|INPUT|OUTPUT I|OUTPUT II|OUTPUT III|
|-----|--------|---------|----------|
|10|Os elementos eram: 6 5 6 9 8 8 5 5 4 3|Depois de ordenados os elementos são: 3 4 5 5 5 6 6 8 8 9|O vetor está ordenado!|
|15|Os elementos eram: 5 3 11 8 12 14 15 2 8 6 6 13 3 7 10|Depois de ordenados os elementos são: 2 3 3 5 6 6 7 8 8 10 11 12 13 14 15|O vetor está ordenado!|   
|20|Os elementos eram: 9 17 10 0 17 7 8 2 10 15 2 20 4 11 8 16 1 9 9 2|Depois de ordenados os elementos são: 0 1 2 2 2 4 7 8 8 9 9 9 10 10 11 15 16 17 17 20|O vetor está ordenado!|
|25|Os elementos eram: 15 20 7 23 12 18 1 6 4 6 1 24 4 15 22 9 16 11 24 24 4 10 8 16 7|Depois de ordenados os elementos são: 1 1 4 4 4 6 6 7 7 8 9 10 11 12 15 15 16 16 18 20 22 23 24 24 24 |O vetor está ordenado!|    
|30|Os elementos eram: 18 26 25 22 11 26 10 21 9 12 23 6 8 13 24 7 21 21 10 5 22 17 7 1 14 0 3 2 16 19|Depois de ordenados os elementos são: 0 1 2 3 5 6 7 7 8 9 10 10 11 12 13 14 16 17 18 19 21 21 21 22 22 23 24 25 26 26|O vetor está ordenado!|

## Counting Sort
|INPUT|OUTPUT I|OUTPUT II|OUTPUT III|
|-----|--------|---------|----------|
|10|Os elementos eram: 4 3 9 2 8 6 0 5 10 2 |Depois de ordenados os elementos são: 0 2 2 3 4 5 6 8 9 10|O vetor está ordenado!|
|15|Os elementos eram: 7 10 13 4 3 14 1 7 14 9 14 4 2 13 12|Depois de ordenados os elementos são: 1 2 3 4 4 7 7 9 10 12 13 13 14 14 14|O vetor está ordenado!|
|20|Os elementos eram: 11 0 14 4 19 3 5 1 7 18 0 15 4 0 13 14 14 18 20 4|Depois de ordenados os elementos são: 0 0 0 1 3 4 4 4 5 7 11 13 14 14 14 15 18 18 19 20|O vetor está ordenado!|
|25|Os elementos eram: 4 16 1 14 18 20 20 14 5 20 21 3 18 11 1 23 8 2 7 10 18 16 11 24 25|Depois de ordenados os elementos são: 1 1 2 3 4 5 7 8 10 11 11 14 14 16 16 18 18 18 20 20 20 21 23 24 25|O vetor está ordenado!|
|30|Os elementos eram: 5 0 4 23 11 7 28 16 16 8 0 23 22 27 12 0 21 2 8 19 6 10 3 0 19 5 12 0 21 18|Depois de ordenados os elementos são: 0 0 0 0 0 2 3 4 5 5 6 7 8 8 10 11 12 12 16 16 18 19 19 21 21 22 23 23 27 28|O vetor está ordenado!|

## Motivações de algumas escolhas

- Decidi demonstrar como era antes e como o vetor ficou ordenado depois para que não se tornasse uma "caixa preta"
- A quantidade de elementos no vetor serviu apenas para uma pequena demonstração do algoritmo para verificar se o vetor está ordenado, e dessa forma, achei mais prático uma curta quantidade de elementos, justamente para não tomar muito espaço
- Os testes foram feitos no Replit pois o meu pc deu pau :p
