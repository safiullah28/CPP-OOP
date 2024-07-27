#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Bus {
private:
  string Busnumber;
  string owner;
  int capacity;

public:
  Bus(string Busnumber, string owner) : Busnumber(Busnumber), owner(owner) {
    capacity = 0;
  }

  Bus(Bus &obj) {
    Busnumber = obj.Busnumber;
    owner = obj.owner;
    capacity = obj.capacity;
  }

  void setBusnumber(string Busnumber) { this->Busnumber = Busnumber; }

  string getBusnumber() { return Busnumber; }

  void setowner(string owner) { this->owner = owner; }

  string getowner() { return owner; }

  void setcapacity(int capacity) { this->capacity = capacity; }

  int getcapacity() { return capacity; }

  void setBus(string Busnumber, string owner, int capacity) {

    this->Busnumber = Busnumber;

    this->owner = owner;

    this->capacity = capacity;
  }

  void getBus() {
    cout << "Enter Bus Number : ";

    getline(cin, Busnumber);

    cout << "Enter Bus Owner's name : ";

    getline(cin, owner);

    cout << "Enter Seating capacity in Bus : ";

    cin >> capacity;
  }

  void putBus() {
    cout << Busnumber << "\t\t\t" << setw(30) << owner << "\t\t" << capacity
         << endl;
  }

  void Book() { capacity += 1; }

  void Cancel() { capacity -= 1; }

  ~Bus() { cout << "Destructor executed." << endl; }
};

int main() {

  Bus b1("LHR 3216", "Lahore Transport Company");

  b1.setcapacity(40);

  // Object 1 initializes throgh Parametrized Constructor

  Bus b2("", "");

  b2.setBusnumber("LHR 3317");

  b2.setowner("Faisal Movers");

  b2.setcapacity(45);

  // Object 2 through setters

  Bus b3("", "");

  b3.setBus("KHI 9876", "Road Master", 80);

  // Object 3 throught setbus function
  Bus b4("", "");

  b4.getBus();

  //   object 4 initializing at runtime

  Bus b5(b1);

  // Object 5 thorugh copy Constructor

  cout << "Bus Number\t\t" << setw(30) << "Owner\t\t"
       << "Seating Capacity" << endl;

  //    Showing the data of all buses

  b1.putBus();

  b2.putBus();

  b3.putBus();

  b4.putBus();

  b5.putBus();

  //   b4.Book();
  //   b4.putBus();
  //   cout << endl;

  return 0;
}