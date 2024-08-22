#include "include/customer.hpp"
#include "include/menu.hpp"
#include "include/queue.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main() {
  Queue normalQueue;
  Queue priorityQueue;
  bool keepGoin = true;
  string userInput, command, userName;
  int age;
  Customer custAux;
  
  while (keepGoin) {
    printMenu();
    cout << "Selecione a opção desejada!" << endl;
    getline(cin, userInput);
    stringstream ss(userInput);
    ss >> command >> userName >> age;
    if (command == "ADICIONAR") {
    Customer newCustomer = Customer(userName, age);
      if (newCustomer.getAge() > 59){
      priorityQueue.enqueue(newCustomer);
      cout << "Paciente " << userName << " (Prioritário) adicionado à fila." << endl;
      }
        
      else{
      normalQueue.enqueue(newCustomer);
      cout << "Paciente " << userName << " (Normal) adicionado à fila." << endl;
      }
    } 
    
    else if (command == "ATENDER") {
      if(priorityQueue.isEmpty()){
        if(normalQueue.isEmpty()){
          cout << "Não há pacientes a serem atendidos!" << endl;
          cout << "Good Job!" << endl;
        }
        else{
          custAux = normalQueue.peek();
          normalQueue.dequeue();
          cout << "Paciente " << custAux.getName() << " (Normal) foi atendido." << endl;
        }
      }
      else{
        custAux = priorityQueue.peek();
        priorityQueue.dequeue();
        cout << "Paciente " << custAux.getName() << " (Prioritário) foi atendido." << endl;
      }
    }
    
    else if (command == "VERIFICAR") {
      if(priorityQueue.isEmpty()){
        cout << "A fila prioritária está vazia!" << endl;
      }
      else{
      cout << "Fila Prioritária: ";
      priorityQueue.printQueue();
      cout << endl;
      }
      if(normalQueue.isEmpty()){
        cout << "A fila de atendimento normal está vazia!" << endl;
      }
      else{
      cout << "Fila Normal: ";
      normalQueue.printQueue();
      cout << endl;
      }
    } 
    
    else if (command == "SAIR") {
      cout << "Encerrando o sistema!" << endl;
      keepGoin = false;
    } 
    
    else {
      cout << "Opção inválida!" << endl;
    }
    ss.clear();
    ss.str("");
  }
}
