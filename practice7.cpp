#include "iostream"
using namespace std;
class Employee {
private:
  string name;
  int id;
  string department;
  string position;

public:
  Employee(string name1, int id1, string department1, string position1) {
    name = name1;
    id = id1;
    department = department1;
    position = position1;
  }
  Employee(string name1, int id1) {
    name = name1;
    id = id1;
    department = "";
    position = "";
  }
  Employee() {
    name = position = department = "";
    id = 0;
  }
  Employee(Employee &obj) {
    position = obj.position;
    name = obj.name;
    id = obj.id;
    department = obj.department;
  }
  void setname(string name1) { name = name1; }
  string getname() { return name; }
  void setposition(string position1) { position = position1; }
  string getposition() { return position; }
  void setdepartment(string department1) { department = department1; }
  string getdepartment() { return department; }
  void setid(int id1) { id = id1; }
  int getid() { return id; }
  void putInfo() {
    cout << name << "\t\t" << id << "\t\t\t" << department << "\t\t\t\t"
         << position << endl;
  }
  ~Employee() { cout << "Destructor employee!" << endl; }
};
int main() {
  Employee *e1;
  e1->setposition("Safi");

  // Employee e1("Fatim Jamshaid", 0304, "Police", "Assistant Commissioner");
  // Employee e2;
  // Employee &ref = e2;
  // ref.setname("Safiullah");
  // ref.setid(0304);
  // ref.setdepartment("PUCIT");
  // ref.setposition("Student");
  // Employee e3(e1);
  // Employee e4;
  // e4.setname("M. Hassan");
  // e4.setdepartment("PUCIT");
  // e4.setposition("Student");
  // e4.setid(0302);
  // Employee e5("Abdullah Butt", 0302);
  // cout << "Name\t\t\t"
  //      << "Id Number\t\t"
  //      << "Department\t\t\t"
  //      << "Position" << endl;
  // e1.putInfo();
  // ref.putInfo();
  // e3.putInfo();
  // e4.putInfo();
  // e5.putInfo();
  return 0;
}
