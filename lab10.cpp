#include <iostream>
using namespace std;
class Ship {
private:
  string name;
  string yob;

public:
  Ship(string name, string yob) : name(name), yob(yob) {}

  void setname(string name) { this->name = name; }

  void setyob(string yob) { this->yob = yob; }

  string getname() { return name; }

  string getyob() { return yob; }

  virtual void print() const {
    cout << "Name  :  " << this->name << "\t\tYear of Build  :  " << this->yob;
  }
};
class CruiseShip : public Ship {
private:
  int no_of_passengers;

public:
  CruiseShip(string name, string yob, int no_of_passengers)
      : Ship(name, yob), no_of_passengers(no_of_passengers) {}
  void setpassengers(int no_of_passsenger) {
    this->no_of_passengers = no_of_passengers;
  }

  int getpassengers() { return no_of_passengers; }
  void print() const override {
    this->Ship::print();
    cout << "No of passengers   :   " << this->no_of_passengers << endl;
  }
};

class CargoShip : public Ship {
private:
  int capacity;

public:
  CargoShip(string name, string yob, int capacity)
      : Ship(name, yob), capacity(capacity) {}

  void setcapacity(int capacity) { this->capacity = capacity; }

  int getcapacity() { return capacity; }
  void print() const override {
    // this->Ship::print();
    cout << "Name  :  " << Ship::getname();
    cout << "\t\tCapacity   :   " << this->capacity << endl;
  }
};
class BattleShip : public Ship {
private:
  int no_of_missiles;

public:
  BattleShip(string name, string yob, int no_of_missiles)
      : Ship(name, yob), no_of_missiles(no_of_missiles) {}
  void setmissiles(int no_of_missiles) {
    this->no_of_missiles = no_of_missiles;
  }

  int getmissiles() { return no_of_missiles; }
  void print() const override {
    // this->Ship::print();
    cout << "Name  :  " << Ship::getname();
    cout << "\t\tNumber of Missiles   :   " << this->no_of_missiles << endl;
  }
};
int main() {

  Ship *shipptr[4] = {new Ship("Safi", "2002"),
                      new CruiseShip("fatim", "1999", 23),
                      new CargoShip("Muazzama", "2003", 09),
                      new BattleShip("Fizza", "1971", 90)};
  for (const auto i : shipptr) {
    i->print();
  }
  for (const auto i : shipptr) {
    delete i;
  }
  return 0;
}