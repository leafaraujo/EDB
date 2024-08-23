#ifndef HASH_HPP
#define HASH_HPP
#include <string>
#include <vector>
#include "list.hpp"
using namespace std;

class Hash{
private:

  static const int TABLE_SIZE = 100;
  List* hash[TABLE_SIZE];

public:
  Hash();
  void addWord(string word);
  void countWord(string word);
  void updateWord(string word, int count);
  void removeWord(string word);
  void searchWord(string word);
  void printTable();
  int hashFunction(const string& word);
  ~Hash();
};

#endif
