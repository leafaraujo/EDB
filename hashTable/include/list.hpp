#ifndef LIST_HPP
#define LIST_HPP
#include <string>
#include <iostream>
using namespace std;

class List{
private:
  struct Node{
    std::string word;
    int data;
    Node* next;

  };
  Node* head;
  Node* tail;

public:
  List();
  void addNode(string word);
  List getList();
  void removeNode(string word);
  void updateNode(string word, int data);
  void printList();
  int searchData(string word);
  bool searchNode(string word);
  bool listIsEmpty();
  ~List();
};


#endif
