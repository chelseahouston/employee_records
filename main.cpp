#include <iostream>
#include <string>
using namespace std;

// Employee Class
class Employee{
  public:
  string name;
  int yearjoined;
  string salary;
  string address;
};

int main (){
  
  // Employee 1: Robert
  Employee empObj1;
  empObj1.name = "Robert";
  empObj1.yearjoined = 2018;
  empObj1.salary = "£25,000";
  empObj1.address = "64C  London  Street";
  
  // Employee 2: Farah
  Employee empObj2;
  empObj2.name = "Farah";
  empObj2.yearjoined = 2015;
  empObj2.salary = "£35,000";
  empObj2.address = "68D  Bristol Road";

  // Employee 03: Satinder
  Employee empObj3;
  empObj3.name = "Satinder";
  empObj3.yearjoined = 2019;
  empObj3.salary = "£32,500";
  empObj3.address = "26B  Salt Street";

  // Print Details
  cout << "Employee Records";
  cout << "\n";

  // 01
  cout << "\nName: " << empObj1.name;
  cout << "\nYear Joined: " << empObj1.yearjoined;
  cout << "\nSalary: " << empObj1.salary;
  cout << "\nAddress: " << empObj1.address;
  cout << "\n";

  // 02
  cout << "\nName: " << empObj2.name;
  cout << "\nYear Joined: " << empObj2.yearjoined;
  cout << "\nSalary: " << empObj2.salary;
  cout << "\nAddress: " << empObj2.address;
  cout << "\n";
  
  // 03
  cout << "\nName: " << empObj3.name;
  cout << "\nYear Joined: " << empObj3.yearjoined;
  cout << "\nSalary: " << empObj3.salary;
  cout << "\nAddress: " << empObj3.address;
  cout << "\n";

  return 0;
}