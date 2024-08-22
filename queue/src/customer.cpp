#include "../include/customer.hpp"
using namespace std;

Customer::Customer(){}

Customer::Customer(string name, int age){
  this->name = name;
  this->age = age;
}

string Customer::getName(){
  return this->name;
}

int Customer::getAge(){
  return this->age;
}
