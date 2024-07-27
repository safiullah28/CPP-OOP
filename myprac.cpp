#include <iostream>
using namespace std;
class MyClass {
private:
  int num1;
  int num2;

public:
  // Constructor with initialization list
  MyClass() : num1(0), num2(0) {
    // Constructor body (if needed)
  }

  void display() { cout << "num1: " << num1 << ", num2: " << num2 << endl; }
};
int main() {
  MyClass obj;
  obj.display();
  return 0;
}