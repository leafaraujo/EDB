#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
using namespace std;

class Customer{
private:
  string name;
  int age;
public:
  Customer();
  Customer(string name, int age);
  string getName();
  int getAge();

};

#endif
