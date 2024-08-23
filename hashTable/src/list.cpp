#include "../include/list.hpp"


List::List(){
  head = nullptr;
  tail = nullptr;
}

void List::addNode(string word){
  if(searchNode(word)){
      Node* current = head;
      while (current != nullptr) {
          if (current->word == word) {
              current->data ++;
              return;
          }
          current = current->next;
    }
  }
  else{
    Node* newNode = new Node;
    newNode->word = word;
    newNode->data = 1;
    newNode->next = nullptr;
    if(head == nullptr){
      head = tail = newNode;
    }
    else{
      tail->next = newNode;
      tail = newNode;
      tail->next = nullptr;
    }
  }
}

void List::removeNode(string word) {
    if (head == nullptr) {
        return;
    }

    
    if (head->word == word) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        if (head == nullptr) {
            tail = nullptr; 
        }
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->word == word) {
            Node* toDelete = current->next;
            current->next = toDelete->next;
            if (toDelete == tail) {
                tail = current; 
            }
            delete toDelete;
            return;
        }
        current = current->next;
    }
}

void List::updateNode(string word, int data) {
    Node* current = head;
    while (current != nullptr) {
        if (current->word == word) {
            current->data = data;
            return;
        }
        current = current->next; 
    }
}


void List::printList() {
    if(head == nullptr){
        cout << "NULL";
    }
    Node* current = head;
    while (current != nullptr) {
        cout << "\"" << current->word << "\", " << current->data;
        current = current->next; 
    }
    if(current == nullptr && head!= nullptr){
        cout << "NULL";
    }
}

int List::searchData(string word){
  Node* current = head;
  while(current != nullptr){
    if(current->word == word){
      return current->data;
    }
  }
  return -1;
}

bool List::searchNode(string word) {
    Node* current = head;
    while (current != nullptr) {
        if (current->word == word) {
            return true;
        }
        current = current->next;
    }
    return false;
}

bool List::listIsEmpty(){
    if(head == nullptr){
        return true;
    }
    return false;
}

List::~List(){}
