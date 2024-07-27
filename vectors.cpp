#include <iostream>

class Base {
public:
  void show() {
    std::cout << "Base class show() function called." << std::endl;
  }
};

class Derived : public Base {
public:
  void show() {
    std::cout << "Derived class show() function called." << std::endl;
  }
};

int main() {
  Base b;
  Derived d;

  // Static binding: the function call is resolved at compile time
  b.show(); // Calls Base::show()
  d.show(); // Calls Derived::show()

  // Static binding when using base class pointer/reference to call non-virtual
  // function
  Base *ptr = &d;
  ptr->show(); // Calls Base::show() because ptr is of type Base*

  Base &ref = d;
  ref.show(); // Calls Base::show() because ref is of type Base&

  return 0;
}
