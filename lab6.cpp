#include <iostream>
using namespace std;
class Ball {
private:
  int id;
  string name;
  int quantity;
  float price;

public:
  Ball(int id, string name, int quantity, float price) {
    this->name = name;
    this->id = (id > 0) ? id : 0;
    this->quantity = (quantity > 0) ? quantity : 0;
    this->price = (price > 0) ? price : 0;
  }
  Ball(int id, string name, int quantity) {
    this->id = (id > 0) ? id : 0;
    this->quantity = (quantity > 0) ? quantity : 0;
    price = 0;
  }

  Ball(int id, string name, float price) {
    this->name = name;
    this->id = (id > 0) ? id : 0;
    this->quantity = 0;
    this->price = (price > 0) ? price : 0;
  }

  Ball(Ball &obj)
      : id(obj.id), name(obj.name), quantity(obj.quantity), price(obj.price) {}

  ~Ball() { cout << "Destructor Executed" << endl; }

  void setid(int id) { this->id = (id > 0) ? id : this->id; }

  void setquantity(int quantity) {
    this->quantity = (quantity > 0) ? quantity : this->quantity;
  }

  void setprice(float price) {
    this->price = (price > 0) ? price : this->price;
  }

  void setname(string name) { this->name = name; }

  int getid() const { return id; }

  int getquantity() const { return quantity; }

  string getname() const { return name; }

  float getprice() const { return price; }

  void setBall(int id, string name, int quantity, float price) {
    setid(id);
    setquantity(quantity);
    setname(name);
    setprice(price);
  }

  void getBall() {
    cout << "Enter id : ";
    cin >> id;
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter quantity : ";
    cin >> quantity;
    cout << "Enter price : ";
    cin >> price;
    setid(id);
    setquantity(quantity);
    setprice(price);
  }

  void putBall() const {
    cout << "ID : " << this->id << "   Quantity : " << this->quantity
         << "   Price : " << this->price << "   Name : " << this->name << endl;
  }

  int Totalprice() const {
    if (quantity >= 1)
      return quantity * price;
    return 0;
  }

  bool isSame(const Ball &obj) const {
    if (this->id == obj.id && this->name == obj.name &&
        this->quantity == obj.quantity && this->price == obj.price) {
      return true;
    }
    return false;
  }

  void updateName(Ball obj[], const int size) {
    for (int i = 0; i < size; i++) {
      if (obj[i].id == this->id) {
        obj[i].name = this->name;
      }
    }
  }

  Ball getmaximumpriceBall(const Ball obj[], const int size) const {
    Ball objj(0, "", 0, 0);
    for (int i = 0; i < size; i++) {
      if (this->price < obj[i].price) {
        objj.price = this->price;
        objj.id = this->id;
        objj.name = this->name;
        objj.quantity = this->quantity;
        return objj;
      }
    }
  }
  void getAveragePrice(Ball obj[], const int size) const {
    for (int i = 0; i < size; i++) {
      if (obj[i].price < 50) {
        obj[i].price = this->price;
      }
    }
  }
};

int main() {
  Ball b1(7, "Safi", 4, 50);
  Ball b2(7, "Ullah", 6, 35);
  Ball b3(7, "JJJJ", 6, 60);
  Ball b4(7, "KKKLL", 6, 40);

  cout << "Total Price : " << b1.Totalprice() << endl;

  Ball b[4] = {b1, b2, b3, b4};

  b1.updateName(b, 4);

  for (int i = 0; i < 4; i++) {
    b[i].putBall();
  }

  cout << endl << "Maximum Price Ball : ";
  b1.getmaximumpriceBall(b, 4).putBall();
  return 0;
}