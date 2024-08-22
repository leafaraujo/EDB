#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <string>
#include "customer.hpp"

class Queue{
private:
  struct Node{
    Customer data;
    Node* next;
  
  Node(Customer value) { 
    data = value; 
    next = nullptr; 
}
  };
  Node* head;
  Node* tail;

public:
  Queue();
  ~Queue();
  bool isEmpty();
  void enqueue(Customer data);
  void dequeue();
  Customer& peek();
  void printQueue();

};


#endif
