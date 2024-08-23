#include "../include/hash.hpp"

Hash::Hash(){
  for(int i = 0; i < TABLE_SIZE; i++){
   List* list = new List();
    hash[i] = list;
      }
}

void Hash::addWord(string word){
  int index = hashFunction(word);
  hash[index]->addNode(word);
}

void Hash::countWord(string word){
  int index = hashFunction(word);
  if(hash[index]->searchNode(word)){
    int data = hash[index]->searchData(word);
    cout << "A palavara \"" << word << "\" aparece " << data << " vez(es)." << endl;
  }
  else{
    cout << "Essa palavra não existe em nosso sistema" << endl;
  }
}

void Hash::updateWord(string word, int count){
  int index = hashFunction(word);
  hash[index]->updateNode(word, count);
  cout << "Contagem da palavra \"" << word << "\" atualizada para " << count << "." << endl;
}

void Hash::removeWord(string word){
  int index = hashFunction(word);
  hash[index]->removeNode(word);
  cout << "Palavra \"" << word << "\" removida. " << endl;
}

void Hash::searchWord(string word){
  int index = hashFunction(word);
  if(hash[index]->searchNode(word)){
    int data = hash[index]->searchData(word);
    cout << "A palavra \"" << word << "\" está presente e ocorre " << data << "vez(es)." << endl;
  }
}

void Hash::printTable(){
  for(int i = 0; i < TABLE_SIZE; i++){
    cout << "Índice " << i << ": ";
    this->hash[i]->printList();
    cout << "->" << endl;
  }
}

int Hash::hashFunction(const string& word){
  unsigned long hash = 5381;
  for (char c : word) {
  hash = (( hash << 5 ) + hash ) + static_cast<unsigned long>(c) ; 
  }
  return hash % TABLE_SIZE ; 
}

Hash::~Hash(){
    for(int i = 0; i < TABLE_SIZE; i++){
      delete hash[i];
    }
}
