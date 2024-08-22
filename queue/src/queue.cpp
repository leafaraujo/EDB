#include "../include/queue.hpp"

Queue::Queue(){
  head = nullptr;
  tail = nullptr;
}


bool Queue::isEmpty(){
  if(this->head == nullptr){
    return true;
  }
  return false;
}

void Queue::enqueue(Customer data){
  Node* newNode = new Node(data);
  if(isEmpty()){
    this->head = this->tail = newNode;
  }
  else{
    this->tail->next = newNode;
    this->tail = newNode;
  }
}

void Queue::dequeue(){
  Node* temp = this->head; 
  this->head = this->head->next;
  if(head == NULL){
    tail = NULL;
  }
  delete temp;
}


Customer& Queue::peek(){
  return head->data;
}

Queue::~Queue(){
  while(!isEmpty()){
    dequeue();
  }
}

void Queue::printQueue() {
  Node* temp = this->head;
  bool first = true;
  while(temp != nullptr){
  Customer custAux = temp->data;
    if(!first && head !=nullptr){
      cout << ", ";
    }
    cout << custAux.getName();
    temp = temp->next;
    first = false;
  }
  cout << ".";
}
